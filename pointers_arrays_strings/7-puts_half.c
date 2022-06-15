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

	if (i % 2 != 0)
	{
		for (n = i / 2; str[n] != 0; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (i / 2) - 1; str[n] !=0; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar(10);
}
