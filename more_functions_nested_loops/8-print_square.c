#include "main.h"
/**
* print_square - prints a square
*
* @size: size of square
*
* @ i: times it's printing
*/
void print_square(int size)
{
	int i;
	int l = 1;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		while(l <= size)
		{
			i = 1;
			l++;
			while (i <= size)
			{
				_putchar('#');
				i++;
			}
			_putchar(10);
		}
	}
}
