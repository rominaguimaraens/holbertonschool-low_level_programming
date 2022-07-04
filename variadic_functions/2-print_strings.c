#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: space between string
 * @n: number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list s;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(s, char*);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(s);
	putchar(10);
}
