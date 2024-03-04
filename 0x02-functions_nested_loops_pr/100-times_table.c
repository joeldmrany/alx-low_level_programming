#include "main.h"

/**
 * print_times_table - print the time nable of integer n
 * @n: the integer
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = (a * b);
				if (a == 0)
				{
					if (b == 0)
						_putchar('0');
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar('0');
					}
				}
				else if (c <= 9)
				{
					if (c == 0)
						_putchar('0');
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(c + '0');
					}
				}
				else if (c > 9 && c <= 99)
				{
					if (c == 0)
						_putchar('0');
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((c / 10) + '0');
						_putchar((c % 10) + '0');
					}
				}
				else if (c >= 100)
				{
					if (c == 0)
						_putchar('0');
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar((c / 100) + '0');
						_putchar(((c % 100) / 10) + '0');
						_putchar(((c % 100) % 10) + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
