#include "main.h"
/**
 * _strpbrk - searches string for set of bytes
 * @s: string
 * @accept: bytes
 * Return: s or 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
