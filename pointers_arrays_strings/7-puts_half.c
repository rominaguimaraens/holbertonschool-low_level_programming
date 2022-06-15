#include "main.h"
/**
* puts_half - prints hals of string
* @str: string
*/
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i])
	{

		i++;
	}

	i = i - 1;

	for (n = i / 2; str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar(10);
}
