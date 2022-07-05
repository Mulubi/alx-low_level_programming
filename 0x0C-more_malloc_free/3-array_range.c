#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer allocated
 * if min > max return NULL
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);
	for (i = 0, min <= max - min; i++, min++)
		ar[i] = min;

	return (ar);
}