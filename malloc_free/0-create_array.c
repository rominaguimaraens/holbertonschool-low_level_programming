#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: initalizer character
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	*s = c;
	return (s);
	free(s);
}
