#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for interger
 * @array: array to look in
 * @size: size of array
 * @cmp: pointer to function
 * Return: returns i, 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
