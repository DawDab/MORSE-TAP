#include "uart.h"
#include "string.h"
#include "convert.h"



void convert(char letter[])
{
	if(!strcmp(letter,"21000"))
	{
		UART_Print("A");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"12220"))
	{
		UART_Print("B");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"12120"))
	{
		UART_Print("C");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"12200"))
	{
		UART_Print("D");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"20000"))
	{
		UART_Print("E");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"22120"))
	{
		UART_Print("F");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"11200"))
	{
		UART_Print("G");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"22220"))
	{
		UART_Print("H");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"22000"))
	{
		UART_Print("I");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"21110"))
	{
		UART_Print("J");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"12100"))
	{
		UART_Print("K");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"21220"))
	{
		UART_Print("L");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"11000"))
	{
		UART_Print("M");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"12000"))
	{
		UART_Print("N");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"11100"))
	{
		UART_Print("O");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"21120"))
	{
		UART_Print("P");
	}
	else if(!strcmp(letter,"11210"))
	{
		UART_Print("Q");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"21200"))
	{
		UART_Print("R");
		LED_Blink(LED_RED,100);
	}
		else if(!strcmp(letter,"22200"))
	{
		UART_Print("S");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"10000"))
	{
		UART_Print("T");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"22100"))
	{
		UART_Print("U");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"22210"))
	{
		UART_Print("V");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"21100"))
	{
		UART_Print("W");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"12210"))
	{
		UART_Print("X");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"12110"))
	{
		UART_Print("Y");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"11220"))
	{
		UART_Print("Z");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"21111"))
	{
		UART_Print("1");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"22111"))
	{
		UART_Print("2");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"22211"))
	{
		UART_Print("3");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"22221"))
	{
		UART_Print("4");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"22222"))
	{
		UART_Print("5");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"12222"))
	{
		UART_Print("6");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"11222"))
	{
		UART_Println("7");
	}
	else if(!strcmp(letter,"11122"))
	{
		UART_Print("8");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"1112"))
	{
		UART_Print("9");
		LED_Blink(LED_RED,100);
	}
	else if(!strcmp(letter,"11111"))
	{
		UART_Print("0");
		LED_Blink(LED_RED,100);
	}
	else
	{
		UART_Print("");
	}
}
