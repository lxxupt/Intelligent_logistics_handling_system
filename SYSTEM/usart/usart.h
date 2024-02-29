#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "stdbool.h"	
#include "fifo.h"
#include "stm32f4xx_conf.h"


void uart1_init(unsigned int bound);
void uart2_init(unsigned int bound);
void uart3_init(unsigned int bound);
void uart4_init(unsigned int bound);
void uart5_init(unsigned int bound);
void uart6_init(unsigned int bound);
void uart_putchar (USART_TypeDef* uratn, char ch);
void uart_putbuff (USART_TypeDef* uratn, u8 *buff, u32 len);
u8 uart_getchar(USART_TypeDef* uratn);
void vcan_sendware(void *wareaddr, uint32_t waresize);
void Fee_Uart_Flush(void);
int16_t Fee_Uart_Read(void);
void Fee_Uart_Send(uint8_t *buf , uint8_t len);
void send(USART_TypeDef* uratn, u8 *buff, u32 len);

extern u8 interrupt_flag;
extern uint8_t Emm_mode;
extern int32_t Encoder_Data[4];
extern int32_t Encoder[4];

#endif


