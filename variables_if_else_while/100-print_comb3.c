#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
 
	for (n = '0'; n < '9'; n++)
	{
		putchar(n);
		for (m = '1'; m <= '9'; m++)
		{
			if (n == m)
			{
				continue;
			}
			putchar(m);
		}
	} 
	putchar('\n');
	return (0);
}
