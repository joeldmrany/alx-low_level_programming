#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print the strings with separator
 * @separator: the separator
 * @n: the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *name;
	va_list argu;

	va_start(argu, n);
	if (n == 0)
		printf("\n");
	for (a = 0; a < n; a++)
	{
		if (separator == NULL)
			separator = "";
		name = va_arg(argu, char*);
		if (name == NULL)
			name = "(nil)";
		if (a < n - 1)
			printf("%s%s", name, separator);
		else
			printf("%s\n", name);
	}
}
