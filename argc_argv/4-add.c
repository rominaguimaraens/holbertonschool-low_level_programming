#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: returns 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	int r;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		r += atoi(argv[i]);
		i++;
	}
	printf("%d\n", r);
	return (0);
}
