#include "main.h"
/**
 * print_square - prints square of #
 * @size: length of the square
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
