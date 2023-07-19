#include "main.h"
/**
 * print_alphabet_x10 - good
 * Return: (0)
 */

void print_alphabet_x10(void)
{
	char a;
	int b;
	
	a = 'a';

	for (b = '0'; b < '10'; b++)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
