#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Return 0 (Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ($n > 0)
		printf("%i is positive\n");
	if ($n < 0)
		printf("%i is negative\n");
	else
		printf("%i is zero\n");
	return (0);
}
