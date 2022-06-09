#include "main.h"
/**
* print_sign - prints sign of n
*
* @n: number to chech
*
* Return: returns o (Successful)
*/

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}

	if (n < '0')
	{
		_putchar('-');
		return (-1);
	}

	if (n == '0')
	{
		_putchar('0');
		return (0);
	}

	else
		return (0);
}
