#include "main.h"
#include <stdio.h>
/**
* print_last_digit - prints last digit
*
* Return: absolute value of n (Success)
*/

int print_last_digit(int n)
{
	n = n % 10;

	_putchaar(abs(n) + 48);
	return (abs(n));
}
