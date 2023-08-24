#include "main.h"
/**
 * print_diagonal - print diagonal by length of n
 * @n: the number of diagonal
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			if (a != n)
			{
				for (b = (a); b > 0; b--)
				{
					_putchar(' ');
				}
				_putchar(92);
				_putchar('\n');
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
