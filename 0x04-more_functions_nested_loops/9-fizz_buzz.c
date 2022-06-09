#include "main.h"
#include <stdio.h>

/**
 * main - entry point of function.
 * Return: always 0 for success.
 */

int main(void)
{
	int i = 1;

	for (; i < 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else 
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
