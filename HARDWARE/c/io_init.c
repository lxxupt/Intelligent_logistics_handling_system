#include "io_init.h"
#include "sys.h" 
#include "timer.h" 
void BEEP_UP(void)
{
	GPIO_SetBits(GPIOA,GPIO_Pin_6);
  beep_flag=1;
}
void BEEP_OFF(void)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin_6);
}

void IO_A_Init(void)//A4:一键启动开关IO,  A6：蜂鸣器IO
{
	GPIO_InitTypeDef  GPIO_InitStrcut;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);
		
	GPIO_InitStrcut.GPIO_Mode=GPIO_Mode_OUT;
	GPIO_InitStrcut.GPIO_OType=GPIO_OType_PP;
	GPIO_InitStrcut.GPIO_Speed=GPIO_Speed_100MHz;
	GPIO_InitStrcut.GPIO_PuPd=GPIO_PuPd_UP;
	GPIO_InitStrcut.GPIO_Pin=GPIO_Pin_6;
	
	GPIO_Init(GPIOA,&GPIO_InitStrcut);//GPIO初始化
	
	GPIO_InitStrcut.GPIO_Mode=GPIO_Mode_IN;
	GPIO_InitStrcut.GPIO_OType=GPIO_OType_PP;
	GPIO_InitStrcut.GPIO_Speed=GPIO_Speed_100MHz;
	GPIO_InitStrcut.GPIO_PuPd=GPIO_PuPd_UP;
	GPIO_InitStrcut.GPIO_Pin=GPIO_Pin_4;
	
	GPIO_Init(GPIOA,&GPIO_InitStrcut);//GPIO初始化
}
