#include <stdio.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: returns 0 (success)
 */
int main(int argc, char *argv[])
{
	int n;
	int m;
	int j;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = _atoi(argv[1]);
		m = _atoi(argv[2]);
		j = (m * n);
		printf("%d\n", j);
		return (0);
	}
}
