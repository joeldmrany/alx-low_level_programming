#include "main.h"
/**
 * print_rev - prints the string in reverse
 * @s: the string pointer
 */
void print_rev(char *s)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
