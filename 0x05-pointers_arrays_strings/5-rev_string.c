#include "main.h"
/**
 * rev_string - reverse the string
 * @s: string
 */
void rev_string(char *s)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = a - 1;
	c = b;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
}
