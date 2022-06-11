#include "main.h"
/**
* print_triangle - prints a diagonal line
*
* @size: number of times to print
*/
void print_triangle(int size)
{
	int i, s;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= size; i++)
		{

			_putchar('#');
			_putchar(10);
				for (s = size; s > i; s--)
				{
					_putchar(32);
				}
		}
	}
}
