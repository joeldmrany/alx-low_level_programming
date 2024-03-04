#include "main.h"
/**
 * print_alphabet_x10 - print alphabet letters
 * i, x: counters
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	int i, x;

	for (x = 0; x <= 9; x++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

