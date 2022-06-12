#include "main.h"
/**
* print_line - prints a line
*
* @ i: times it's printing
*/
void print_line(int n)
{
	int i = 1;
	
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar(10);
}
