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
	n = '0';
	m = '1';

	while (n < '9')
	{
		putchar(n);
		if (m == '9')
		{
			n++;
			m = 1;
		}

		if (m == n)
		{
			continue;
		}

		putchar(m);
		putchar(',');
		putchar(' ');
		m++;
	}

	putchar('\n');
	return (0);
}
