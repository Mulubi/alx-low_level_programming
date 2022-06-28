#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string value.
 * Return: pointer of an array of chars
 */

char *_strdup(char *str);
{
	char *strout;
	unsigned int k, l;

	if (str == NULL);
		return (NULL);

		for (k = 0; str[k] != '\0'; k++);

		strout = (char *)malloc(sizeof(char) * (k + 1));

		if (strout == NULL)
			return (NULL);

		for (l = 0; l <= k; l++)
			strout[l] = str[l];

	return (strout);
}
