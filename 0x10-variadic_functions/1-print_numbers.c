#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - it prints the numbers with separator
 * @separator: it is the separator
 * @n: the number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list argu;

	va_start(argu, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(argu, const unsigned int);
		printf("%d", x);

		if (i < n -1)
			{
				printf("%s", separator);
			}
	}
	va_end(argu);
	printf("\n");
}
