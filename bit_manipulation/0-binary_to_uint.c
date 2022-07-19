#include <stdio.h>
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: binary number to convert
 * Return: value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
			value <<= 1;
			value += b[i] - '0';
			i++;
	}
	if (b[i] != '1' && b[i] != '0')
		return (0);
	else
		return (value);
}
