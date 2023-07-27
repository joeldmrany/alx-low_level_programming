#include "main.h"
/**
 * puts2 - put even numbers of the string position
 * @str: string
 */
void puts2(char *str)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
