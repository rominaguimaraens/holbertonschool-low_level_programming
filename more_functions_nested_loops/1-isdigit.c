#include "main.h"
/**
* _isdigit - checks if digit
*
* @c: digit or not
*
* Return: returns 0 (success)
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
