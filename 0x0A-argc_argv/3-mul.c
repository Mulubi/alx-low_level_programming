#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: counts
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	mul = 0;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul );
	return (0);
}
