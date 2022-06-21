#include <stdio.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 * Return: returns 0 (success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i]; i++)
		printf("%s\n", argv[i]);
	return (0);
}
