#include "main.h"
#include <stdio.h>
#include <strings.h>
/**
 * set_bit - sets value of bit at index
 * @n: number
 * @index: position
 * Return: bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned int j = 64;
	unsigned long int num = (1 << index), copy = *n;

	if (n)
	{
		if (index >= i && index < j)
			return (num | copy);
		else
			return (-1);
	}
	else
		return (-1);
}
