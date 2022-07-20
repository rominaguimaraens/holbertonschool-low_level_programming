#include "main.h"
#include <stdio.h>
#include <strings.h>
/**
 * clear_bit - clears value of bit at index
 * @n: number
 * @index: position
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = ~(1 << index), num = *n;

	if (n)
	{
		if (index <= 64)
		{
			*n = (position | num);
			return (1);
		}
		else
			return (-1);
	}
	else
	{
		return (-1);
	}
}
