#include "main.h"
/**
 * _print_rev_recursion - it prints the statment in reverse phase
 * @s: it is the string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
