#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @p: integer is p.
 *
 * Return: integer
 */

int print_last_digit(int p)
{
	int last = p % 10;

	if (p < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
