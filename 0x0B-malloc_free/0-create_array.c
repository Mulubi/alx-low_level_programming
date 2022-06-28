#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of the array
 * @c: stored char
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int k;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		cr[k] = c;

	return (cr);
}
