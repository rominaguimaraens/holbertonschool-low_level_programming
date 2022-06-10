#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints fomr n to 98
*
* @n: number to start at
*/
void print_to_98(int n)
{
	for (n; n <= 98; n++;)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d", n);
			_putchar(',');
			_putchar(' ');
		}

	}
}
