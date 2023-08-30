#include "main.h"
/**
 * _pow_recuresion - return the result of x power y
 * @x: the number
 * @y: the power
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return x;
}
