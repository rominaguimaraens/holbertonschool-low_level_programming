#include "main.h"
/**
 * is_delimiter - char delimiter
 * @c: char
 * Return: 1 (success)
 */
int is_delimiter(char c)
{
	char d[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (d[i])
	{
		if (d[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/**
 * cap - capitalizes lowercase
 * @c: char
 * Return: c
 */
char cap(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
/**
 * cap_string - capitalizes string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0)
		{
			s[i] = cap(s[i]);
		}
		else
		{
			if (is_delimiter(s[i - 1]) == 1)
			{
				s[i] = cap(s[i]);
			}
		}
		i++;
	}
	return (s);
}
