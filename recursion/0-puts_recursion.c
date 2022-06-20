#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);
}
