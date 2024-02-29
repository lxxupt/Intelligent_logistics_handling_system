#include "run.h"
#include "tx2.h"
#include "delay.h"
#include "usart.h"
#include "stdbool.h"
#include "math.h"
#include "usart.h"
#include "Emm_V5.h"
#define Emm_Uart USART3
#define L 8.95
int total_x=0,total_y=0,total_lastx=0,total_lasty=0;
float errw,errx,erry;
int32_t data_bud[4]={0};
uint8_t RxFlag;
uint8_t GetRxFlag(void)
{
	if (RxFlag == 1)
	{
		RxFlag = 0;
		return 1;
	}
	return 0;
}

//uint8_t cmd[10]={0};
//void Move_Init(void)
//{
//	cmd[0] = 0x00;	/* ��ַ */
//	cmd[1] = 0xFD;	/* ������ */
//	cmd[2] = 0x00;	/* ������ֽ� + �ٶȸ߰��ֽ� */
//	cmd[3] = 0x32;	/* �ٶ��ֽ�,( (uint16_t)(cmd[2] & 0x0F) << 8 | (uint16_t)cmd[3] )����ٶ� */
//	cmd[4] = 0x32;	/* ���ٶ� */
//	cmd[5] = 0x00;	/* ���������ֽ� */
//	cmd[6] = 0x00;	/* ���������ֽ� */
//	cmd[7] = 0x00;	/* ���������ֽ� */
//	cmd[8] = 0x6B;	/* �̶�У���ֽ� */
//}

//void send(void)
//{
//    interrupt_flag=1;
//    while(interrupt_flag)
//    {
//        interrupt_flag=0;
//				uart_putbuff(USART3, cmd, 9);
//        delay_ms(1); 
//    }
//    delay_ms(2); 
//}

//0��ת,1��ת
void Move_Left(u32 length,u16	speed,u8 acc)
{
	Emm_mode=0;
    Emm_V5_Pos_Control(1, 1, speed, acc, length, 0, true); 
	Emm_V5_Pos_Control(2, 1, speed, acc, length, 0, true);
	Emm_V5_Pos_Control(3, 0, speed, acc, length, 0, true);
	Emm_V5_Pos_Control(4, 0, speed, acc, length, 0, true);
	RxFlag=0;
	Emm_V5_Synchronous_motion(); // �������ͬ����ʼ�˶�
  while(GetRxFlag()==0);
    delay_ms(5);
}

void Move_Line(u32 length,u16	speed,u8 acc)
{
	Emm_mode=0;
    Emm_V5_Pos_Control(1, 0, speed, acc, length, 0, true);
	Emm_V5_Pos_Control(2, 1, speed, acc, length, 0, true);
	Emm_V5_Pos_Control(3, 0, speed, acc, length, 0, true);
	Emm_V5_Pos_Control(4, 1, speed, acc, length, 0, true);
	RxFlag=0;
	Emm_V5_Synchronous_motion(); // �������ͬ����ʼ�˶�
  while(GetRxFlag()==0);
    delay_ms(5);
}

void Move_Back(u32 length,u16	speed,u8 acc)
{
    Emm_mode=0;
    Emm_V5_Pos_Control(1, 1, speed, acc, length, 0, true);
    Emm_V5_Pos_Control(2, 0, speed, acc, length, 0, true);
    Emm_V5_Pos_Control(3, 1, speed, acc, length, 0, true);
    Emm_V5_Pos_Control(4, 0, speed, acc, length, 0, true);
    RxFlag=0;
    Emm_V5_Synchronous_motion(); // �������ͬ����ʼ�˶�
    while(GetRxFlag()==0);
    delay_ms(5);
}

void Move_Right(u32 length,u16 speed,u8 acc)
{
    Emm_mode=0;
    Emm_V5_Pos_Control(1, 0, speed, acc, length, 0, true);
    Emm_V5_Pos_Control(2, 0, speed, acc, length, 0, true);
    Emm_V5_Pos_Control(3, 1, speed, acc, length, 0, true);
    Emm_V5_Pos_Control(4, 1, speed, acc, length, 0, true);
    RxFlag=0;
    Emm_V5_Synchronous_motion(); // �������ͬ����ʼ�˶�
    while(GetRxFlag()==0);
    delay_ms(5);
}

void Move_xuzhuan(u32 length,u16 speed,u8 acc)//4280��90��
{
    Emm_mode=0;
    Emm_V5_Pos_Control(1, 1, speed, acc, length, 0, true);
    Emm_V5_Pos_Control(2, 1, speed, acc, length, 0, true);
    Emm_V5_Pos_Control(3, 1, speed, acc, length, 0, true);
    Emm_V5_Pos_Control(4, 1, speed, acc, length, 0, true);
    RxFlag=0;
    Emm_V5_Synchronous_motion(); // �������ͬ����ʼ�˶�
    while(GetRxFlag()==0);
    delay_ms(5);
}

//void stop(void)
//{
//	Emm_mode=0;
//	int length=0,speed=0,acc=50;
//	if(length>0x00ffffff) length=0x00ffffff;
//	if(speed>0x0fff) speed=0x0fff;
//	Move_Init();

//	cmd[4] = acc;	/* ���ٶ� */
//	cmd[5] = (length/256/256)%256;	/* ���������ֽ� */
//	cmd[6] = (length/256)%256;	/* ���������ֽ� */
//	cmd[7] = length%256;	/* ���������ֽ� */
//	
//	cmd[2] = (speed/256)%16;	/* ������ֽ� + �ٶȸ߰��ֽ� */
//	cmd[3] = speed%256;	/* �ٶ��ֽ�,( (uint16_t)(cmd[2] & 0x0F) << 8 | (uint16_t)cmd[3] )����ٶ� */

//	cmd[0] = 0x01;cmd[2] &= 0x0f;
//	cmd[2] |= 0x00;
//	send();

//	cmd[0] = 0x03;cmd[2] &= 0x0f;
//	cmd[2] |= 0x10;
//	send();

//	cmd[0] = 0x02;cmd[2] &= 0x0f;
//	cmd[2] |= 0x10;
//	send();

//	cmd[0] = 0x04;cmd[2] &= 0x0f;
//	cmd[2] |= 0x00;
//	send();
//	while(GetRxFlag()==0);
//  delay_ms(2);
//}


int vxx,vyy,vww;
int v1, v2, v3, v4; //��Ӧ�ĸ��������������ٶ�
int x1, x2, x3, x4,a1,a2,a3,a4;
bool dao1=0,dao2=0,dao3=0,dao4=0;

int catch_x_pid(void)//
{
    int cam_x_err,out_x;
    static int integral,ki_integral;
    static int16_t catch_x_err1[3]={0};//�ĸ�PID��ֵ
    float Kp=0.3;
    float	Ki=0.2;
    float Kd=0.0;
    
    cam_x_err=target_x-tx2_data[3];//��������ͷ��������y���ϵ����ݣ����ж�������Ҫ�����˲���
    catch_x_err1[1] = catch_x_err1[0];//�ϴ����
    catch_x_err1[0] = cam_x_err;  //�趨ֵ - ����ֵ//��ǰ���
    
    integral +=  catch_x_err1[0];
    
    ki_integral=Ki*ki_integral;
    if(ki_integral>=100)ki_integral=100;else if(ki_integral<=-100)ki_integral=-100;
    
    out_x = (int16_t)(Kp*(float)catch_x_err1[0] + ki_integral + Kd*(catch_x_err1[0]-catch_x_err1[1]));
    if(catch_x_err1[0]<=2.0&&catch_x_err1[0]>=-2.0) integral=0;
    if(out_x>=300) out_x=300; else if(out_x<=-300) out_x=-300;
    
    if(tx2_data[3]>=20&&tx2_data[3]<=250)	return out_x;
    else return 0;
}

int catch_y_pid(void)//		
{
    int out_y,cam_y_err;
    static int integral,ki_integral;
    static int16_t catch_y_err1[3]={0};//�ĸ�PID��ֵ
    float Kp=0.3;
    float	Ki=0.2;
    float Kd=0.0;
    
    cam_y_err=target_y-tx2_data[4];
    catch_y_err1[1] = catch_y_err1[0];//�ϴ����
    catch_y_err1[0] = cam_y_err;  //�趨ֵ - ����ֵ//��ǰ���
    
    integral +=  catch_y_err1[0];
    ki_integral=Ki*ki_integral;
    if(ki_integral>=100)ki_integral=100;else if(ki_integral<=-100)ki_integral=-100;
    
    out_y = (int16_t)(Kp*(float)catch_y_err1[0] + ki_integral + Kd*(catch_y_err1[0]-catch_y_err1[1]));			
    
    if(catch_y_err1[0]<=2.0&&catch_y_err1[0]>=-2.0) integral=0;
    if(out_y>=300) out_y=300; else if(out_y<=-300) out_y=-300;
    if(tx2_data[4]>=20&&tx2_data[4]<=250)		return out_y;
    else return 0;
}

void set_speed(int16_t speed,u8 id)//
{
	uint8_t m=1;
  char  A[3];
	if(speed>=0) m=0;
	else {m=1;speed=-speed;}
/*
	����»��ߣλ������ת��
*/
	A[0]=speed/256;
  A[1]=speed/16%16;
	A[2]=speed%16;
	switch(id)
	{
		case 1:cmd[0] = 0x01;	/* ��ַ */ break;
		case 2:cmd[0] = 0x02;	/* ��ַ */ break;
		case 3:cmd[0] = 0x03;	/* ��ַ */ break;
		case 4:cmd[0] = 0x04;	/* ��ַ */ break;
		default : break;
	}
	cmd[1] = 0xF6;	/* ������ */     // 12 31 54 1    
	cmd[2] = (m<<4)|(A[0]);	/* ������ֽ� + �ٶȸ߰��ֽ� */ //��λ0��ת  0001 0003   /  0000 0003
	cmd[3] = (A[1]<<4)|A[2];	/* �ٶ��ֽ�,( (uint16_t)(cmd[2] & 0x0F) << 8 | (uint16_t)cmd[3] )����ٶ� */
	cmd[4] = 0xff;	/* ���ٶ� */
	cmd[5] = 0x6B;;	/* �̶�У���ֽ� */
	/* �������� */
  uart_putbuff(USART3, cmd, 6);
  delay_ms(1);
}

int16_t move_1,move_2,move_3,move_4;
void Set_Speed_jz(int32_t move_x,int32_t move_y,float w)//���ֵ��ٶ�
{
	move_1 = (int16_t)(move_y-move_x + (int16_t)w*L); //mm/s ����
	move_4 = (int16_t)(move_y-move_x - (int16_t)w*L); //v=w*R
	move_2 = (int16_t)(move_y+move_x + (int16_t)w*L); //L=L1+L2
	move_3 = (int16_t)(move_y+move_x - (int16_t)w*L); //mm/s
    
    set_speed(move_1,1);
    set_speed(move_2,2);
    set_speed(move_3,3);
    set_speed(move_4,4);
}



u8 Stop_Flag=0;
void Get_Stop(void)
{
  Stop_Flag=1;
  uint8_t data_y_old[2]={0};
  uint8_t data_x_old[2]={0};

	while(Stop_Flag)
	{
			data_x_old[1]=data_x_old[0];//
			data_y_old[1]=data_y_old[0];//
			data_x_old[0]=data[0];//x
			data_y_old[0]=data[1];//y
		if(data[0]!=0&&data[1]!=0)//��⵽����
		{
			Stop_Flag=2;
		}
//���ͣ����������
			if(Stop_Flag==2&&(((data_x_old[1]-data[0])<=5)&&((data_x_old[1]-data[0])>=-5)&& (data_y_old[1]-data[1])<=5)&&(data_y_old[1]-data[1])>=-5&&data[0]!=0)
	  {
			delay_ms(100);
			Stop_Flag=3;
	  }
		if(Stop_Flag==3&&(data_x_old[1]-data[0])<=1&&(data_x_old[1]-data[0])>=-1&&(data_y_old[1]-data[1])<=1&&(data_y_old[1]-data[1])>=-1)
		{
		 Stop_Flag=0;
		}
	}
}




/*
�����ĸ�����˶�����
�����ڲ�������Ҫ�ٰ��ղ�������Լ�������е���
*/
void mecannum_solu(void) 
{
	int64_t	w1=Encoder_Data[0],
            w2=-Encoder_Data[1],
            w3=Encoder_Data[2],
            w4=-Encoder_Data[3];
	
	int64_t pingjun=(w1+w2+w3+w4)/4;
	int64_t w11=w1-pingjun;
//	int64_t w22=w2-pingjun;
//	int64_t w33=w3-pingjun;
	int64_t w44=w4-pingjun;
	
	int64_t you=(w11+w44)/2/2731;
	double zhuan=(w11-w44)/2/20.5/4280*90;//1000������壬��Ӧ20500ʵ�����壬7.5cm
	int64_t qian=pingjun/2731;
	data_bud[0]=you;		data_bud[1]=qian;		data_bud[2]=zhuan;
}
//���ͬ���˶�
void set_motor_speed(int v1,int v2,int v3,int v4, uint8_t acc, bool snF)
{
    if(v1>=0) Emm_V5_Vel_Control(1, 1, v1, acc, snF);
    else Emm_V5_Vel_Control(1, 0, -v1, acc, snF);
    if(v2>=0) Emm_V5_Vel_Control(1, 1, v2, acc, snF);
    else Emm_V5_Vel_Control(1, 0, -v2, acc, snF);
    if(v3>=0) Emm_V5_Vel_Control(1, 1, v3, acc, snF);
    else Emm_V5_Vel_Control(1, 0, -v3, acc, snF);
    if(v4>=0) Emm_V5_Vel_Control(1, 1, v4, acc, snF);
    else Emm_V5_Vel_Control(1, 0, -v4, acc, snF);
    Emm_V5_Synchronous_motion(); // �������ͬ����ʼ�˶�
}
//�����˶���x������Ϊ��y������Ϊǰ
void juedui_run(int x,int y,u16	speed,u8 acc)
{
    total_x = x;total_y = y;
    int deta_x = total_x - total_lastx;
    int deta_y = total_y - total_lasty;
    total_lastx = total_x;
    total_lasty = total_y;
    
    if(deta_x>=0) Move_Left(deta_x,speed,acc);
    else Move_Right(-deta_x,speed,0);
    if(deta_y>=0) Move_Line(deta_y,speed,acc);
    else Move_Back(-deta_y,speed,0);
    
    uint8_t msgbuf[35];	//��Ϣ������ 
    sprintf((char*)msgbuf,"\r\ntotal_x: %d , total_y: %d !!!!!!!!!!!!\r\n",total_x,total_y);
    uart_putbuff(USART2, msgbuf, 35);
}




