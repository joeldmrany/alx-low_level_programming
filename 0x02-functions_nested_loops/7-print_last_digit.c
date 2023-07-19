#include "main.h"
/** print_last_digit - it print last digit
 * @a: it is the int
 * Return: 0
 */
int print_last_digit(int a)
{
	int c;

	c = a % 10;
	if (c < 0)
	{
		_putchar(-c + 48);
		return (-c);
	}
	else
	{
		_putchar(c + 48);
		return(c);
	}
}
