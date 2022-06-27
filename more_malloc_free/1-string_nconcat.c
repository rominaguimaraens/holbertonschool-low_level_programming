#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer / null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s1) > 0)
		l += strlen(s1);
	if (strlen(s2) > 0)
	{
		if (n > strlen(s2))
			l += strlen(s2);
		else
			l += n;
	}
	l++;
	p = malloc(l * sizeof(char) + 5);
	if (p == NULL)
		return (NULL);
	if (strlen(s1) > 0 || s1 != NULL)
	{
		for (; s1[i]; i++)
			p[i] = s1[i];
	}
	if (strlen(s2) > 0 || s2 != NULL)
	{
		if (n > strlen(s2))
		{
			for (; s2[j]; i++, j++)
				p[i] = s2[j];
		}
		else
			for (; j < n; i++, j++)
				p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
