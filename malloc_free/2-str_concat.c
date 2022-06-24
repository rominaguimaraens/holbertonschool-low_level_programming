#include "main.h"
#include <stdlib.h>
/*
 * str_concat - concatenates strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m;
	char *s3;

	i = 0;
	j = 0;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	s3 = malloc(i + j + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	k = i + j;

	for (l = 0; l < i; l++)
	{
		s3[l] = s1[l];
	}
	for (l = l, k = k, m = 0; l < k; l++, m++)
	{
		s3[l] = s2[m];
	}
	s3[l] = '\0';
	return (s3);
	free(s3);
}
