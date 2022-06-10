#include "main.h"
/**
* _isupper - checks if uppercase
*
* @c: letter either lower or upper
*
* Return: returns 0 (success)
*/
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
