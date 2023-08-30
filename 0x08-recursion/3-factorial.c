#include "main.h"
/**
 * factorial - gives the factorial of the number
 * @n: the number
 * Return: 1 or 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (n);
}
