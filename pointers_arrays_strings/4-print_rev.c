#include "main.h"
/**
* print_rev - print in reverse
* @s: array
*/
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	for (i = i - 1; s[i]; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
