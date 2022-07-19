#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns value of bit at index
 * @n: number
 * @index: position
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) >> index);
}
