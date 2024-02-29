#include "display.h"
#include "lcd.h"
#include "Tx2.h"
#include "usart.h"
#include "run.h"
void display_init(void)
{
//	 LCD_ShowNum(u16 x,u16 y,u32 num,u8 len,u8 size);  						//��ʾһ������
//   LCD_ShowxNum(u16 x,u16 y,u32 num,u8 len,u8 size,u8 mode);				//��ʾ ����
    
	LCD_ShowString(0,0,210,24,24,"camera_x :");		//��ʾһ���ַ���,12/16����
	LCD_ShowString(0,30,210,24,24,"camera_y :");		//��ʾһ���ַ���,12/16����
	LCD_ShowString(0,60,210,24,24,"angle:");		//��ʾһ���ַ���,12/16����
}

void display_data(void)
{
//	LCD_ShowNum(120,0, tx2_data[0],6,24);
//	LCD_ShowNum(120,30,tx2_data[1],6,24);
//	LCD_ShowNum(120,50,Encoder_Data[0],6,24);
    if(data_bud[0]>=0) LCD_ShowNum(120,0,data_bud[0],6,24);
    else LCD_ShowNum(120,0, -data_bud[0],6,24);
    if(data_bud[1]>=0) LCD_ShowNum(120,30,data_bud[1],6,24);
    else LCD_ShowNum(120,30,-data_bud[1],6,24);
    if(data_bud[2]>=0) LCD_ShowNum(120,60,data_bud[2],6,24);
    else LCD_ShowNum(120,60,-data_bud[2],6,24);
    
//	 LCD_ShowNum(u16 x,u16 y,u32 num,u8 len,u8 size);  						//��ʾһ������
//   LCD_ShowxNum(u16 x,u16 y,u32 num,u8 len,u8 size,u8 mode);				//��ʾ ����
}

