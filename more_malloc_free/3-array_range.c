#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - creates array of int
 * @min: min
 * @max: max
 * Return: array / NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int l, i;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(l * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		a[i] = min;
	return (a);
}
