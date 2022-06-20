#include "main.h"
/**
 * _helper - gets prime number
 * @i: divide by
 * @n: num to check
 * Return: something
 */
int _helper(int i, int n)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_helper(i - 1, n));
	}
}
/**
 * is_prime_number - is it a prime number
 * @n: number to check
 * Return: something
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_helper(n - 1, n));
}
