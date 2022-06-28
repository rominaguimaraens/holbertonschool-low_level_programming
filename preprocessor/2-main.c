#include <stdio.h>
/**
 * main - prints name of the file it's compiled from
 * Return: returns 0 (success)
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
