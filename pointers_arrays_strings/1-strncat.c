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
	int j;
	int k = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[k])
	{
		k++;
	}
	if (n > k)
	{
		dest = 0;
	}
	else 
	{	
		for (j = 0; j < n; j++, i++)
		{
			dest[i] = src[j];
		}
	dest[i] = 0;
	}
	return (dest);
}
