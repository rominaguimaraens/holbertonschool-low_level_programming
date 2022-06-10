#include "main.h"
/**
* times_table - shows 9 times tables
*/
void times_table(void)
{
	int n, m, r;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			r = n * m;
			if (r > 9)
			{
				_putchar((r / 10) + 48);
				_putchar((r % 10) + 48);
			}
			else
			{
				_putchar((r % 10) + 48);
			}
			if (m < 9)
			{
				_putchar(',');
				if (r + n < 10)
				{
					_putchar(' ');
				}
				_putchar(' ');

			}
			else
			{
				_putchar(10);
			}
		}
	}
}
