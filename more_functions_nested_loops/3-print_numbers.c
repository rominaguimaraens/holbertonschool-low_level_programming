#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');

}
