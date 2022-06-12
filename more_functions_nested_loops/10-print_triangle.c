#include "main.h"
/**
* print_triangle - prints a diagonal line
*
* @size: number of times to print
*/
void print_triangle(int size)
{
	int i, s, l;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (s = size; s > l; s--)
			{
                                :x
			}
			for (i = 1; i <= s; i++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
