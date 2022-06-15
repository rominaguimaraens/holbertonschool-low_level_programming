#include "main.h"
/**
* swap_int - swaps the value of two ints
* @a: first val
* @b: second val
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
