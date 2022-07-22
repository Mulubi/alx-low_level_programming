#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 *
 * Return: the converted number, or 0 if otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, b2;

	if (!b)
		return (0);

	num = 0;

	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--, b2 = 1; i >= 0; i--, b2 *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			num += b2;
		}
	}

	return (num);
}
