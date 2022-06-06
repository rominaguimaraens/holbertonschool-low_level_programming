#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intype;
	float floatype;
	char chartype;
	long int longtype;
	long long int longlongtype;

	printf("Size of a char: %zu byte(s)\n", sizeof(chartype));
	printf("Size of an int: %zu byte(s)\n", sizeof(intype));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longtype));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongtype));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatype));
	return (0);
}
