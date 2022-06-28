#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int k, l, m, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k] != '\0'; k++)
		;

	for (l = 0; s2[l] != '\0'; l++)
		;

	strout = malloc(sizeof(char) * (k + l + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (m = 0; m < 1; m++)
		strout[m] = s1[m];

	limit = l;
	for (l = 0; l <= limit; m++, l++)
		strout[m] = s2[l];

	return (strout);
}
