#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - function that prints some words before the main function
 *
 * Return: nothing.
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
