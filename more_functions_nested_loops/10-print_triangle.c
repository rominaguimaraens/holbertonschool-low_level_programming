#include "main.h"
/**
* print_triangle - prints a diagonal line
*
* @size: number of times to print
*/
void print_triangle(int size)
{
	int i, s;
	int l = 1;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (l <= size)
		{
			i  = 1;
			while (i < l)
			{
				s = size;
				while (s > l)
				{
					_putchar(32);
					s--;
				}
				_putchar('#');
				i++;
			}
			_putchar(10);
			l++;
		}
	}
}
