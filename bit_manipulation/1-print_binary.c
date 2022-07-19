#include<stdio.h>
#include "main.h"
/**
 * print_binary - prints number as binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	int i;

	for (i = 1 << 31; i > 0; i = i / 2)
		(n & i) ? _putchar('1') : _putchar('0');
}
