#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: print between numbers
 * @n: number
 * Return: j
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list j;

	va_start(j, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(j, int));
		if (i < n - 1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(j);
	putchar(10);
}
