#include "main.h"
/**
 * main - fine
 * Return: (0)
 */

void print_alphabet(void)
{
	char a;

	a = 'a';
	while(a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
