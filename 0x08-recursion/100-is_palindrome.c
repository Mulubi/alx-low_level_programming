#include "main.h"

/**
 * _strlen_recursion - checks length of string recursion
 * @s: pointer to string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @k: position
 * Return: a certain condition
 */

int p1(char *s, int k)
{
	if (k < 1)
	{
		return (1);
	}

	if (*s == *(s + k))
	{
		return (p1(s + 1, k - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome type
 * @s: pointer to string
 * Return: recursion.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
