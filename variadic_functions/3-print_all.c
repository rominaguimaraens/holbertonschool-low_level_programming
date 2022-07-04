#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - prints all
 * @format: format of string
 */

void print_all(const char * const format, ...)
{
	char *string;
	int i = 0;
	int condition;
	int formatlen;
	va_list j;

	if (format)
		formatlen = strlen(format);
	va_start(j, format);
	while (format && format[i])
	{
		condition = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(j, int));
			condition = 1;
			break;
		case 'i':
			printf("%d", va_arg(j, int));
			condition = 1;
			break;
		case 'f':
			printf("%f", va_arg(j, double));
			condition = 1;
			break;
		case 's':
			string = va_arg(j, char *);
			!string ? printf("(nil)") : printf("%s", string);
			condition = 1;
			break;
		}
		if (condition == 1 && i < formatlen - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(j);
}
