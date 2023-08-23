#include "main.h"

/**
 * times_table - print time table of number 9
 * Return: void
 */
void times_table(void)
{
	int b, c, d;

	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			d = (b * c);
			if (d <= 9)
			{
				if (d == 0 && (b != 0))
				{
					_putchar('0');
				}
				else if (b == 0)
				{
					if (c != 9)
					{
						_putchar('0');
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar('0');
				}
					
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(d + '0');
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
