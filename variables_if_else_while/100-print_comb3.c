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
 
	for (n = '0'; m = '1'; n <= '9'; m++)
	{	putchar(n);
		if (m == n)
		{
			continue;
		}
		if (m == '10')
		{
			m = '1';
			n++
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
