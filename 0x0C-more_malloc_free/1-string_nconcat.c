#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: amount of bytes
 * Return: pointer to allocated mem
 * exit with 98 if NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int sizes1 = 0, sizes2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[sizes1] != '\0')
	{
		sizes1++;
	}

	while (s2[sizes2] != '\0')
	{
		sizes2++;
	}

	if (n > sizes2)
	n = sizes2;
	t = malloc((sizes1 + n + 1) * sizeof(char));

	if (t == NULL)
		return (0);

	for (i = 0; i < sizes1; i++)
	{
		t[i] = s1[i];
	}

	for (; i < (sizes1 + n); i++)
	{
		t[i] = s2[i - sizes1];
	}
	t[i] = '\0';

	return (t);
}
