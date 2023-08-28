#include "main.h"
/**
 * print_rev - prints the string in reverse
 * @s: the string pointer
 */
void print_rev(char *s)
{
	int a, b;

	for (a = 0; s[a] < '\0'; a++)
	{
	}
	for (b = a; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
