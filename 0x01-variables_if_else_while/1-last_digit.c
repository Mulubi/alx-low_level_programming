#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assigns a random number to int n everytime executed,
 * Return: 0 if the program executes successfuly.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5){
		printf("Last digit of %d is greater than 5\n", n)
	}
	else if (n == 0){
		printf("Last digit of %d is 0\n", n)
	}
	else (n < 6){
		printf("Last digit of %d is less than 6 and not 0\n", n)
	}
	return (0);
}
