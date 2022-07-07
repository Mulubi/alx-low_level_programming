#include "variadic_function.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing.
 */

void print_all(const char * const format, ...)
{
	va_list warren;
	unsigned int i = 0; j, c =0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(warren, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j])
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(warren, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(warren, int)), c = 1;
			break;
		case 'f':
                        printf("%f", va_arg(warren, double)), c = 1;
			break;
		case 's':
                        str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		i++;
	}
	printf("\n"), va_end(warren);
}
