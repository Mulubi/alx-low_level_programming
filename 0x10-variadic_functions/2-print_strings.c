#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: a variable number of strings to be printed
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list warren;
	char *str;
	unsigned int k;

	va_start(warren, n);

		for (k = 0; k < n; k++)
		{
		str = va_arg(warren, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
		}

		printf("\n");

		va_end(warren);
}
