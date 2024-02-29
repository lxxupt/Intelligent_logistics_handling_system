#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "lcd.h"
#include "io_init.h"
#include "timer.h"
#include "display.h"
#include "Tx2.h"
#include "run.h"
#include "Emm_V5.h"
#include "fifo.h"
int main(void)
{ 
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//����ϵͳ�ж����ȼ�����2
	delay_init(168);      //��ʼ����ʱ����
//	uart1_init(115200);		//
//	uart2_init(115200);		//����
	uart3_init(115200);		//���̲��������ʼ��
//	uart4_init(115200);	
//	uart5_init(115200);	
//	uart6_init(115200);		//���ػ�е��
	LED_Init();					  //��ʼ��LED
	LCD_Init();           //��ʼ��LCD FSMC�ӿ�
 	display_init();       //��ʼ��LCD 
	IO_A_Init();					//A4:һ����������IO,  A6��������IO
	TIM7_js_init();				//10ms
	TIM5_js_init();				//10ms
	LED_Init();					  //��ʼ��LED
	BEEP_UP();
	
//    set_motor_speed(50,50,50,50,0,true);//���ͬ���˶�
    motor_clear_all();
//    Move_Right(1600,20,0);
//    Move_Left(2000,20,0);
//    Move_Line(1000,20,0);
//    Move_Left(1000,20,0);
//    Move_xuzhuan(4280/3,20,0);
    
//  Move_Back(1600,20,0);
//    no_pid();
//    juedui_run(1000,500,20,20);
////    delay_ms(100);
//    juedui_run(0,0,20,20);
  	while(1)
	{ 
		Move_Right(3200,50,0);
		Move_Line(3200,50,0);
    Move_Left(3200,50,0);
    
    Move_Back(3200,50,0);
//        motor_read_all();
//        mecannum_solu();
//        delay_ms(100);
        
	} 
}












