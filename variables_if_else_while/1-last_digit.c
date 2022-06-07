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
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = (n % 10);

	printf("Last digit of %d ", n);
	if (lastdig > 5)
		printf("is %d and is greater than 5\n", lastdig);
	else if ((lastdig < 6) && (lastdig != 0))
		printf("is %d and is less than 6 and not 0\n", lastdig);
	else
		printf("is %d and is 0\n", lastdig);
	return (0);
}
