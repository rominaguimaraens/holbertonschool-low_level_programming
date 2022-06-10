#include "main.h"
/**
* jack_bauer - shows all hours in a day
*
*/

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar(48);
				_putchar(h + 48);
			}

			else
			{
				_putchar((h / 10) + 48);
				_putchar((h % 10) + 48);
			}

			_putchar(':');

			if (m < 10)
			{
				_putchar(48);
				_putchar(m + 48);
			}

			else
			{
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
			}
			_putchar(10);
		}
	}
}
