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
	int i = 1;
	int l = 1;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		while(l <= n)
		{
			putchar(10);
			l++;
			while (i <= size)
			{
				_putchar('#');
				i++;
			}
		}
		_putchar(10);
	}
}
