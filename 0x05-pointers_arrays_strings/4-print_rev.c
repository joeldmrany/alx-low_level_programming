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
		a++;
	}
	b = a;
	c = b;
	for (s[c] = '\0'; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
