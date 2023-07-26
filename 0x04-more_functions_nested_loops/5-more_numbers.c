#include "main.h"
/**
 * more_numbers - numbers alot
 */
void more_numbers(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)

		{
			_putchar(b);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
