#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing.
 */

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - helper function to print char
 * @arg: a list of arguments pointing to the char to be printed
 */

void print_char(va_list arg)
{
	char word;

	word = va_arg(arg, int);
	printf("%c", word);
}

/**
 * print_int - helper function to print int
 * @arg: a list of arguments pointing to the int to be printed
 */

void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - helper function to print float
 * @arg: a list of arguments pointing to the float to be printed
 */

void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}

/**
 * print_string - helper function to print string
 * @arg: a list of arguments pointing to the string to be printed
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

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
