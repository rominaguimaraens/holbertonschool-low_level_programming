#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: other string
* @n: number of characters
* Return: returns dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
