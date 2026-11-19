/*
 * io_tools.c
 *
 * Redirect printf() to USART3 = ST-LINK virtual COM port (115200 8N1).
 * syscalls.c (_write) calls __io_putchar() for every character.
 */
#include "usart.h"

int __io_putchar(int ch)
{
	HAL_UART_Transmit(&huart3, (uint8_t *)&ch, 1, 10);
	return ch;
}
