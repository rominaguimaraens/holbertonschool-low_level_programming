#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all args
 * @n: number of args
 * Return: returns res
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int res = 0;
	va_list a;

	if (n == 0)
	{
		return (0);
	}
	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		res += va_arg(a, int);
	}
	va_end(a);
	return (res);
}
