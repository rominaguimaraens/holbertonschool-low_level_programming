#include "main.h"
/**
 * _squ - potential root
 * @n: number
 * @i: potential root
 * Return: sqare root
 */
int _squ(int n, int i)
{
	int root = (i * i);

	if (root == n)
	{
		return (i);
	}
	else if (root < n)
	{
		return (_squ(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - square root of number
 * @n: number
 * Return: root
 */
int _sqrt_recursion(int n)
{
	return (_squ(n, 1));
}
