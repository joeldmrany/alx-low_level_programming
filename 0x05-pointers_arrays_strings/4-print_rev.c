#include "main.h"
/**
 * print_rev - reverse of puts
 * @s: string
 */
void print_rev(char *s)
{
	int a, b;

	for (a = 0; a != '\0'; a++)
	{
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
