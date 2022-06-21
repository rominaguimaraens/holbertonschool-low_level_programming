#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds substring
 * @haystack: where to look
 * @needle: what to find
 * Return: haystack or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	while (needle[j])
	{
		j++;
	}
	while (*haystack)
	{
		i = 0;
		while (needle[i])
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
			i++;
		}
		if (i != j)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
		i++;
	}
	return (0);
}
