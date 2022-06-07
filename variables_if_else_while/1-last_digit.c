#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Resturns 0 (Successful)
 */

int main(void)
{
	int n; stdin lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", n);
	lastdig=n%10;
	if (n > 5)
		printf("Last digit of %d is lastdig and is greater than 5\n", n, lastdig);
	if (n < 6)
		printf("Last digit of %d is lastdig and is less than 6 and not 0\n", n, lastdig);
	if (n == 0)
		printf("Last digit of %d is lastdig and is 0\n", n, lastdig);
	return (0);
}
