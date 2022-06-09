#include "main.h"
/**
* _islower - checks i lowercase
*
* @c: letter either lower or upper
*
* Return: returns 0 (success)
*/

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
