#include "main.h"
/**
 * puts2 - prints one character and leave one then print one and so on ...;
 * @str: string
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
