#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints the stringsj
 * @separator: the separator between strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list argu;

	va_start(argu, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		x = va_arg(argu, char*);
		if (x == NULL)
		{
			x = "(nil)";
		}
		printf("%s", x);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(argu);
	printf("\n");
}
