#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints fomr n to 98
*
* @n: number to start at
*/
void print_to_98(int n)
{
	int m;

	if (n == 98)
	{
		printf("%d", n);
		putchar(10);
	}
	else if (n < 98)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d", m);
			if (m < 98)
			{
				putchar(',');
				putchar(' ');
			}
			if (m == 98)
			{
				putchar(10);
			}
		}
	}
	else if (n > 98)
	{
		for (m = n; m >= 98; m--)
		{
			printf("%d", m);
			if (m > 98)
			{
				putchar(',');
				putchar(' ');
			}
			if (m == 98)
			{
				putchar(10);
			}
		}
	}
}
