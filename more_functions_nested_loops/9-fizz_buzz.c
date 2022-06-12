#include "main.h"
#include <stdio.h>
/**
* main - entry point
*
* Return: returns 0 (success)
*/
int main(void)
{
	int n;

	for (n = 1; n < 101; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			putchar(' ');
		}
		else
		{
			putchar(10);
		}
	}
	return (0);
}
