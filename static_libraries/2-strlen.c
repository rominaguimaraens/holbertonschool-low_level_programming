#include "main.h"
/**
* _strlen - string length
* @s: pointer
* Return: returns string length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
