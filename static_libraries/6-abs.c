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
	if (i >= 0)
	{
		return (i);
	}

	if (i < 0)
	{
		i = (i * (-1));
		return (i);
	}

	else
		return (0);
}
