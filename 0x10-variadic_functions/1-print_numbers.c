#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints the numbers
 * @separator: it is the separator
 * @n: number of integers
 * Return: void ( nothing )
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list argu;

	va_start(argu, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		x = va_arg(argu, unsigned int);
		printf("%d", x);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argu);
}
