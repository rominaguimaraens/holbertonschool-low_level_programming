i#include "main.h"
#include <stdio.h>
/**
* print_to_98 - prints fomr n to 98
*
* @n: number to start at
*/
void print_to_98(int n)
{
	while (n <= 98)
	{
		n++;
		if (n == 98)
		{
			putchar('n' + 48);
		}
		else
		{
			putchar('n' + 48);
			putchar(',');
			putchar(' ');
		}

	}
}
