#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: counts
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	mul = atoi(argv[1]) * atoi(argv[2]);

	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", mul );
	return (0);
}
