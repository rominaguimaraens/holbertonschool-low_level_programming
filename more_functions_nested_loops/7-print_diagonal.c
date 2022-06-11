#include "main.h"
/**
* print_diagonal - prints a diagonal line
*
* @n: number of times to print
*/
void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{

			_putchar(92);
			_putchar(10);
			if (i != n)
			{
				for (s = 0; s < i; s++)
				{
					_putchar(32);
				}
			}
		}
	}
}
