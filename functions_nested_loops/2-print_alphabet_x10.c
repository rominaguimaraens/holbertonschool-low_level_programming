#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int times = 1;

	while (times < 10)
	{
		times++;

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}
