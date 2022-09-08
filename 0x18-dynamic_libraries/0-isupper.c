#include "main.h"

/**
 * _isupper - checks whether a character is uppercase or not
 * @c: character
 * Return: return 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
