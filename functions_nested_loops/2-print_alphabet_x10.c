#include "main.h"

/**
 * print_alphabet_10x - prints alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char ch;
	int times = 1;

	while (times <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}


		_putchar('\n');
		times++;

	}

}
