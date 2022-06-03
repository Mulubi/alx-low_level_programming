#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	putchar[0] = n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
		printf("%c","n, is positive\n");
	if (n=0)
		printf("%c","n, is zero\n");
	else
		printf("%c","n, is negative\n");
	
	return (0);
}
