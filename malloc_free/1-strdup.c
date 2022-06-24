#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer
 * @str: string
 * Return: returns pointer
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	p = malloc(i + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	p[i] = '\0';

	return (p);
	free(p);
}

