#include "Tx2.h"
#include "usart.h" 
#include "delay.h" 
#include "run.h"
#include "io_init.h" 
#include "fucttion.h" 

uint8_t TX_mode=1;  								// 2��ά��ʶ�� 1����ʶ�� 3ɫ��ʶ��
int tx2_data[5]={0};
int16_t data[8]={0},camera_x=0,camera_y=0;
int16_t QR_data[6]={0};							//��ά����Ϣ��XXX+XXX��
u8 num=0; 													//����֡���ճ��ȱ�־λ
/*	
		data[0]:X����					data[1]:Y���� 
		data[2]:ɫ����X����   data[3]:ɫ����Y����
		data[0]:������ɫ 			1��ӦRED 2��ӦGREEN 3��ӦBLUE
*/

void Qr_code(void)  //��ά��ɼ���ʼ�źŷ��ͺ���
{
	TX_mode=2;
	while(QR_data[5]==0)
	{
		uart_putchar(USART2, 'c');
	}
	delay_ms(2);
    
}
//
void Bar_code(u8 color) //����ʶ��ʼ�źŷ��ͺ���
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
//mode  1:�ּӹ���  2�����ӹ�
void sco_move(u8 mode)
{
    color_score();
    
    if(mode==1)
    {
        target_x=149;target_y=99;//x��С������
    }
    else 
    {
        target_x=149;target_y=101;// y��С�Ƿŵ�λ�ÿ���
    }
    
	while(1)
	{
		Set_Speed_jz(-catch_x_pid(),-catch_y_pid(),0);//���㲢������ٶ�
        
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
		if(TX_mode==1)//����ʶ��
		{
			if(temp=='s') num=1;    //֡ͷ
			else if(num==1) {data[0]=(temp-48)*100;num=2;}  //X������
			else if(num==2) {data[0]+=(temp-48)*10;num=3;}
			else if(num==3) {data[0]+=(temp-48); tx2_data[0]=data[0];num=4;}
            
			else if(num==4) {data[1]=(temp-48)*100;num=5;}  //Y������
			else if(num==5) {data[1]+=(temp-48)*10;num=6;}
			else if(num==6) {data[1]+=(temp-48);tx2_data[1]=data[1];num=0;}
			else num=0;
		}		
		
		else if(TX_mode==2)//��ά��ʶ��
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
		if(TX_mode==3)//ɫ��ʶ��
		{
			if(temp=='b') num=1;
			else if(num==1) {data[3]=(temp-48)*100;num=2;}   //X������
			else if(num==2) {data[3]+=(temp-48)*10;num=3;}
			else if(num==3) {data[3]+=(temp-48); tx2_data[3]=lpf_x(data[3]);num=4;}
			
			else if(num==4) {data[4]=(temp-48)*100;num=5;}      //Y������
			else if(num==5) {data[4]+=(temp-48)*10;num=6;}
			else if(num==6) {data[4]+=(temp-48);tx2_data[4]=lpf_y(data[4]);num=0;}
			else num=0;
		}
        
        if(wending_flag)
            wending_count++;
	}
	
}
	









