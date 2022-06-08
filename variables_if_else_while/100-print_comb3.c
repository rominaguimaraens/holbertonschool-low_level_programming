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
 	m = '1';

	for (n = '0'; n <= '10'; m++)
	{	putchar(n);
		if (m == n)
		{
			continue;
		}
		if (m == '10')
		{
			m = '1';
			n++;
		}

		else
		{
			putchar(m);
			putchar(',');
			putchar(' ');
		}
		
	} 
	putchar('\n');
	return (0);
}
