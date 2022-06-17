#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: other string
* Return: returns dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = 0;
	return (dest);
}
