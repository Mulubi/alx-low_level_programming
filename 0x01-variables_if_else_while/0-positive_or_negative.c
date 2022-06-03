#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assigns a random number to int n everytime executed,
 * Return: 0 if the program executes successfuly.
 * if: collects the first input and checks whether true,
 * if not true the second function runs instead.
 * else: closes the block if both declared functions are not true.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
