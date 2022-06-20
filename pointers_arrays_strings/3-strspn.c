#include "main.h"
/**
 * _strspn - length of prefix substring
 * @s: string
 * @accept: bytes to look for
 * Return: b
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int b = 0;

	for (i = 0; i <= 5; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				b++;
			}
		}
	}
	return (b);
}
