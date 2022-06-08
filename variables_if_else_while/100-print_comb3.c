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

	for (n = '0'; n <= '9'; m++)
	{	putchar(n);
		if (m == n)
		{
			continue;
		}
		putchar(m);
		putchar(',');
		putchar(' ' );
		if (m == '9')
		{
			m = '1';
			n++;
		}

		
	} 
	putchar('\n');
	return (0);
}
