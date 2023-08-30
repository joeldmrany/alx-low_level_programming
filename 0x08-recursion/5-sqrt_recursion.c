#include "main.h"
/**
 * _sqrt_recursion - get the square root of the number
 * @n: the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int result;

	result = _root(n, 1);
	return (result);
}

/**
 * _root - give the root
 * @n: the number
 * @r: the root
 * Return: the resutlt
 */
int _root(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r < n)
		return (_root(n, r + 1));
	else
		return (-1);
}
