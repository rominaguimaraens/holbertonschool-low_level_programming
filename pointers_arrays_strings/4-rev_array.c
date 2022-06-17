#include "main.h"
/**
* print_array - reverse string
* @a: array
* @n: array length
*/
void print_array(int *a, int n)
{
	int j;
	int c;
	int i = 0;

	while (a[i])
	{
		i++;
	}

	for (j = 0, i = i - 1; j < n; i--, j++)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}


