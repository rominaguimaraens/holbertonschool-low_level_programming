#include "main.h"
/**
 * leet - encodes string in 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int i = 0
	int j;
	char a[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[i])
	{
		j = 0;
		while (a[j])
		{
			if (s[i] == a[j] || s[i] == (a[j] + 32))
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
