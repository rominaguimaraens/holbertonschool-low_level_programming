#include "main.h"
/**
* _abs - absolute value of integrer
*
* @i: integrer
*
* Return: i
*/

int _abs(int i)
{
	if (i >= '0')
	{
		return (i);
	}

	else
	{
		i = (i * (-1));
		return (i);
	}
}
