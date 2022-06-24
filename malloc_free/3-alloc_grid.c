#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array of ints
 * @width: width
 * @height: height
 * Return: returns pointer
 */

int **alloc_grid(int width, int height)
{
	int **d;
	int i, j;

	d = malloc(height * sizeof(int *));

	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		d[i] = malloc(width * sizeof(int));
		if (d[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(d[i]);
			}
		free(d);
		return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			d[i][j] = 0;
		}
	}
	return (d);
}
