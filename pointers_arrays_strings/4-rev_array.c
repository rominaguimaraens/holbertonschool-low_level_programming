#include "main.h"
/**
* print_array - reverse string
* @a: array
* @n: array length
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (n = n - 1; i < n; i++, n--)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}


