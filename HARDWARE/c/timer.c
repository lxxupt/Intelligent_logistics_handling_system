#include "timer.h"
#include "usart.h"
#include "run.h"
#include "display.h"
#include "Emm_V5.h"

void TIM5_js_init(void)//
{
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;
	NVIC_InitTypeDef NVIC_InitStruct;
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5,ENABLE);
	
	TIM_TimeBaseInitStruct.TIM_ClockDivision=TIM_CKD_DIV1;
	TIM_TimeBaseInitStruct.TIM_CounterMode=TIM_CounterMode_Up;
	
	//下端代码修改计数周期为10ms
	TIM_TimeBaseInitStruct.TIM_Period=10000-1;
	TIM_TimeBaseInitStruct.TIM_Prescaler=84-1;

	TIM_TimeBaseInit(TIM5,&TIM_TimeBaseInitStruct);
	
	NVIC_InitStruct.NVIC_IRQChannel=TIM5_IRQn;
	NVIC_InitStruct.NVIC_IRQChannelCmd=ENABLE;
	NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority=0x01;
	NVIC_InitStruct.NVIC_IRQChannelSubPriority=0x01;
	NVIC_Init(&NVIC_InitStruct);
	
	TIM_ITConfig(TIM5,TIM_IT_Update,ENABLE);
	TIM_Cmd(TIM5,ENABLE);
}

void TIM7_js_init(void)//
{
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStruct;
	NVIC_InitTypeDef NVIC_InitStruct;
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM7,ENABLE);
	
	TIM_TimeBaseInitStruct.TIM_ClockDivision=TIM_CKD_DIV1;
	TIM_TimeBaseInitStruct.TIM_CounterMode=TIM_CounterMode_Up;
	
	//下端代码修改计数周期为10ms
	TIM_TimeBaseInitStruct.TIM_Period=1000-1;
	TIM_TimeBaseInitStruct.TIM_Prescaler=840-1;

	TIM_TimeBaseInit(TIM7,&TIM_TimeBaseInitStruct);
	
	NVIC_InitStruct.NVIC_IRQChannel=TIM7_IRQn;
	NVIC_InitStruct.NVIC_IRQChannelCmd=ENABLE;
	NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority=0x03;
	NVIC_InitStruct.NVIC_IRQChannelSubPriority=0x00;
	NVIC_Init(&NVIC_InitStruct);
	
	TIM_ITConfig(TIM7,TIM_IT_Update,ENABLE);
	TIM_Cmd(TIM7,ENABLE);
}


uint8_t TURN_ON=0;
void TIM5_IRQHandler(void)                          //定时器5中断服务函数
{
    interrupt_flag=1;
	if(TIM_GetITStatus(TIM5,TIM_IT_Update)==SET)      //溢出中断
	{
		display_data();
//		if(Emm_mode==1)
////		vcan_sendware(Encoder_Data, sizeof(Encoder_Data));
//		vcan_sendware(data_bud, sizeof(data_bud));
//		vcan_sendware(speed,sizeof(speed));
	}
	TIM_ClearITPendingBit(TIM5,TIM_IT_Update);        //清除中断标志位
}


u8 beep_flag=0,beep_cout=0;
void TIM7_IRQHandler(void)                          //定时器5中断服务函数
{
    interrupt_flag=1;
	if(TIM_GetITStatus(TIM7,TIM_IT_Update)==SET)      //溢出中断
	{
		
		if(beep_flag)
		{
				beep_cout++;
				if(beep_cout>15)
				{
						beep_cout=0;beep_flag=0;
						GPIO_ResetBits(GPIOA,GPIO_Pin_6);
				}
		}

	}
	TIM_ClearITPendingBit(TIM7,TIM_IT_Update);        //清除中断标志位
}
















