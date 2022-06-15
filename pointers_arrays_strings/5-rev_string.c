#include "main.h"
/**
* rev_string - reverse string
* @s: string
*/
void rev_string(char *s)
{
	int j;
	int c;
	int i = 0;

	while (s[i])
	{
		i++;
	}

	for (j = 0, i = i - 1; j < i; i--, j++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
