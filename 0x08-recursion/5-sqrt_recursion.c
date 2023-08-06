#include "main.h"
/**
 * mine_sqrt - you don't have to know that
 * @a: result
 * @b: the number
 * Return: -1 or b
 */
int mine_sqrt(int a, int b)
{
	if ((b * b) == a)
	{
		return (b);
	}
	else if ((b * b) > a)
	{
		return (-1);
	}
	else
	{
		return (mine_sqrt(a, b + 1));
	}
}
/**
 * _sqrt_recursion - return the sqrt
 * @n: the number which we will return its sqrt
 * Return: n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (mine_sqrt(n, 1));
}
