#include <stdio.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: returns 0 (success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;
	int j;

	while (argv[i])
	{
		i++;
	}
	if (i < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = ((*argv[1]) * (*argv[2]));
		printf("%d\n", j);
		return (0);
	}
}
