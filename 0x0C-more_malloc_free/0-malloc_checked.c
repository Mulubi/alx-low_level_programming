#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bytes
 *
 * Return: pointer to allocated memory
 * if malloc fails, fail process gets rep with 98
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
