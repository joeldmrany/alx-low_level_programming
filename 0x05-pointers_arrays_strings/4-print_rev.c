#include "main.h"
/**
 * print_rev - reverse of puts
 * @s: string
 */
void print_rev(char *s)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		++a;
	}
	b = a;
	c = b;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}

	_putchar('\n');
}
