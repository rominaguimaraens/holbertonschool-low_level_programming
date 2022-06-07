#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Resturns 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch, '\n');
		ch++;
	}
	return (0);
}
