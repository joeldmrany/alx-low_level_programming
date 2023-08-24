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
		for (a = 0; a < n; a++)
		{
			if (a != (n - 1))
				_putchar(92);
			if (a != (n))
			{
				_putchar('\n');
				for (b = a; b > 0; b--)
				{
					_putchar(' ');
				}
			}
		}
	}
	else if (n <= 0)
		_putchar('\n');
}
