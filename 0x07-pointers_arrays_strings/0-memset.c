#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to char
 * @b: data to be changed
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;

	for (n = 0; n > 0; n++)
	{
		s[n] = b;
	}
	return (s);
}
