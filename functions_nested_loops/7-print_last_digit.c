#include "main.h"
#include <stdio.h>
/**
* _abs - absolute value of integrer
*
* @i: integrer
*
* Return: i
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

/**
* print_last_digit - prints last digit
*
*@n: number
*
* Return: absolute value of n (Success)
*/

int print_last_digit(int n)
{
	n = n % 10;

	_putchar(_abs(n) + 48);
	return (_abs(n));
}
