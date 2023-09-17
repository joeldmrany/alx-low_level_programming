#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers by the separator
 * @separator: the separator
 * @n: the numbers of arguments
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, num;
	va_list argu;

	va_start(argu, n);
	if (n == 0)
		printf("\n");
	for (a = 0; a < n; a++)
	{
		num = va_arg(argu, int);
		if (separator == NULL)
			separator = "";
		if (a < n - 1)
		{
			printf("%d%s", num, separator);
		}
		else
			printf("%d\n", num);
	}
}
