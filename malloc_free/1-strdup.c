#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory for a string
 * @str: string
 * Return: returns pointer
 */
char *_strdup(char *str)
{
	char *p = malloc((*str + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	return (p);
	free(p);
}

