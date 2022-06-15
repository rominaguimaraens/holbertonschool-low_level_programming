#include "main.h"
#include <stdio.h>
/**
*print_array -print array
* @a: array
* @n: number of elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%i", a[i]);
		}
		else
		{
			printf("%i, ", a[i]);
		}
	}
	_putchar(10);
}
