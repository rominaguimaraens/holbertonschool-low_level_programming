#include "main.h"

/**
 * more_numbers - prints alphabet ten times
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int c;
	int times = 1;

	while (times <= 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c < 10)
			{
				_putchar(c);
			}
			if (c >= 10)
			{
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
			c++;
		}
		_putchar('\n');
		times++;
	}
}
