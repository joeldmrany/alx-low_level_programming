#include "main.h"
/**
 * times_table - print the time table from number one to number 9
 */
void times_table(void)
{
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{
		for (b = '0'; b < '9'; b++)
		{
			for (c = '0'; c < '9'; c++)
			{
				int d = (b + 0) + (c + 0);
				_putchar(d + 0);
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
