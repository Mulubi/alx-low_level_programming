#include "main.h"

/**
 * _memcpy - copies memory area.
 * @s: pointer to char
 * @c: char parameter to found
 * Return: to pointer s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
