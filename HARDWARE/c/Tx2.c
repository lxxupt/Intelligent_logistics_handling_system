#include "Tx2.h"
#include "usart.h" 
#include "delay.h" 
#include "run.h"
#include "io_init.h" 
#include "fucttion.h" 

uint8_t TX_mode=1;  								// 2二维码识别 1物料识别 3色环识别
int tx2_data[5]={0};
int16_t data[8]={0},camera_x=0,camera_y=0;
int16_t QR_data[6]={0};							//二维码信息（XXX+XXX）
u8 num=0; 													//数据帧接收长度标志位
/*	
		data[0]:X坐标					data[1]:Y坐标 
		data[2]:色环的X坐标   data[3]:色环的Y坐标
		data[0]:物料颜色 			1对应RED 2对应GREEN 3对应BLUE
*/

void Qr_code(void)  //二维码采集开始信号发送函数
{
	TX_mode=2;
	while(QR_data[5]==0)
	{
		uart_putchar(USART2, 'c');
	}
	delay_ms(2);
    
}
//
void Bar_code(u8 color) //物料识别开始信号发送函数
{
	TX_mode=1;
	if(color==1)
	uart_putchar(USART2, 'R');
	else if(color==2)
	uart_putchar(USART2, 'G');
	else if(color==3)
	uart_putchar(USART2, 'B');
	delay_ms(2);
}
//
void color_score(void)
{
	TX_mode=3;
    while(data[4]==0)
    {
        uart_putchar(USART2, 'm');
        delay_ms(2);
    }
}

int target_x=144,target_y=170;
u8 wending_flag=0,wending_count=0;
//mode  1:粗加工；  2：精加工
void sco_move(u8 mode)
{
    color_score();
    
    if(mode==1)
    {
        target_x=149;target_y=99;//x减小车往右
    }
    else 
    {
        target_x=149;target_y=101;// y减小是放的位置靠下
    }
    
	while(1)
	{
		Set_Speed_jz(-catch_x_pid(),-catch_y_pid(),0);//计算并分配各速度
        
        if((tx2_data[3]-target_x>=-2&&tx2_data[3]-target_x<=2)&&(tx2_data[4]-target_y>=-2&&tx2_data[4]-target_y<=2))
        {
            wending_flag=1;
            while(wending_count<2);
            wending_flag=0;wending_count=0;
            if((tx2_data[3]-target_x>=-2&&tx2_data[3]-target_x<=2)&&(tx2_data[4]-target_y>=-2&&tx2_data[4]-target_y<=2))
            {
                set_speed(0,1);set_speed(0,2);set_speed(0,3);set_speed(0,4);
                break;
            }
        }	
     }
}

//
void wait_Tx2(void)
{
	TX_mode=0;
	uart_putchar(USART2, 'e');
	delay_ms(2);
}

void USART2_IRQHandler(void)  //B  G  R		//s g c	f
{
    interrupt_flag=1;
	uint8_t temp=0;
	if(USART_GetITStatus(USART2, USART_IT_RXNE) != RESET)
	{
		temp=uart_getchar(USART2);
		if(TX_mode==1)//物料识别
		{
			if(temp=='s') num=1;    //帧头
			else if(num==1) {data[0]=(temp-48)*100;num=2;}  //X的坐标
			else if(num==2) {data[0]+=(temp-48)*10;num=3;}
			else if(num==3) {data[0]+=(temp-48); tx2_data[0]=data[0];num=4;}
            
			else if(num==4) {data[1]=(temp-48)*100;num=5;}  //Y的坐标
			else if(num==5) {data[1]+=(temp-48)*10;num=6;}
			else if(num==6) {data[1]+=(temp-48);tx2_data[1]=data[1];num=0;}
			else num=0;
		}		
		
		else if(TX_mode==2)//二维码识别
		{
			if(temp=='f') num=1;
			else if(num==1) {QR_data[0]=temp-48;num=2;}
			else if(num==2) {QR_data[1]=temp-48;num=3;}
			else if(num==3) {QR_data[2]=temp-48;num=4;}
			else if(num==4)	{num=5;}
			else if(num==5) {QR_data[3]=temp-48;num=6;}
			else if(num==6) {QR_data[4]=temp-48;num=7;}
			else if(num==7) {QR_data[5]=temp-48;num=8;}
			else num=0;	
		}
		if(TX_mode==3)//色环识别
		{
			if(temp=='b') num=1;
			else if(num==1) {data[3]=(temp-48)*100;num=2;}   //X的坐标
			else if(num==2) {data[3]+=(temp-48)*10;num=3;}
			else if(num==3) {data[3]+=(temp-48); tx2_data[3]=lpf_x(data[3]);num=4;}
			
			else if(num==4) {data[4]=(temp-48)*100;num=5;}      //Y的坐标
			else if(num==5) {data[4]+=(temp-48)*10;num=6;}
			else if(num==6) {data[4]+=(temp-48);tx2_data[4]=lpf_y(data[4]);num=0;}
			else num=0;
		}
        
        if(wending_flag)
            wending_count++;
	}
	
}
	









