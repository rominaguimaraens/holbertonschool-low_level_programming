#include "main.h"
/**
 * _strchr - finds character in string
 * @s: string
 * @c: character
 * Return: 0.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == 0)
	{
		return (s);
	}
	return (0);
}
