#include "main.h"
#include <stdio.h>
/**
* print_last_digit - prints last digit
*
* Return: absolute value of n (Success)
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}

	if (i < 0)
	{
		i = (i * (-1));
		return (i);
	}

	else
		return (0);
}

int print_last_digit(int n)
{
	n = n % 10;

	_putchar(_abs(n) + 48);
	return (_abs(n));
}
