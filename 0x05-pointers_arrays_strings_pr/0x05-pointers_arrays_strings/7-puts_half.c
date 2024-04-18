#include "main.h"
#include <string.h>
/**
 * puts_half - print the second halp of the string
 * @str: the string
 */
void puts_half(char *str)
{
	int a, b, length;

	length = strlen(str);
	if (length % 2 != 0)
		a = (length - 1) / 2;
	else
		a = length / 2;

	for (b = length - a; b < length; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
