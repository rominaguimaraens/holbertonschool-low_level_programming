#include "main.h"
#include <stdlib.h>
/*
 * str_concat - GHJLJHK concatenates strings
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
	l = 0;

	while (s1 != NULL && s1[i])
	{
		i++;
	}
	while (s2 != NULL && s2[j])
	{
		j++;
	}
	s3 = malloc(i + j + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	k = i + j;

	if (s1 != NULL)
	{
		for (l = l; l < i; l++)
		{
			s3[l] = s1[l];
		}
	}
	if (s2 != NULL)
	{
		for (l = l, k = k, m = 0; l < k; l++, m++)
		{
			s3[l] = s2[m];
		}
	}
	s3[l] = '\0';
	return (s3);
	free(s3);
}
