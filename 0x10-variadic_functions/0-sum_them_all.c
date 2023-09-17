#include "variadic_functions.h"
/**
 * sum_them_all - it adds all the arguments
 * @n: number of parameters
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum;
	va_list argu;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(argu, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(argu, int);
	}
	return (sum);
}
