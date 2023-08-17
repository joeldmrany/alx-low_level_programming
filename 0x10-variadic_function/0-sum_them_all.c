#include "variadic_functions.h"

/**
 * sum_them_all - sum all numbers
 * @n: integer number
 * Return: 0 or the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, result;

	va_list argu;

	va_start(argu, n);
	result = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(argu, const unsigned int);
		result += x;
	}

	va_end(argu);

	return (result);
}
