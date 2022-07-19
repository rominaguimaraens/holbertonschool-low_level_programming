#include "main.h"
#include <stdio.h>
#include <strings.h>
/**
 * get_bit - returns value of bit at index
 * @n: number
 * @index: position
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	unsigned int j = sizeof(n);

	if (index >= i && index < j)
		return ((n & (1 << index)) >> index);
	else
		return (-1);
}
