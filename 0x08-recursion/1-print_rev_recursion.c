#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints int reverse
 * @s: it is the string that will be added
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

