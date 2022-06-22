#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: an integer n.
 * Return: any int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: an integer
 * @k: an integer
 * Return: sqrt
 */

int _sqrt(int n, int k)
{
	if (n < 0)
		return (-1);
	if ((k * k) > n)
		return (-1);
	if (k * k == n)
		return (k);
	return (_sqrt(n, k + 1));
}
