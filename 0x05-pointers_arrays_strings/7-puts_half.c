#include "main.h"
#include <string.h>
/**
 * puts_half - print second half of the string
 * @str: the string
 */
void puts_half(char *str)
{
	int i, a;

	i = strlen(str);

	for (a = (i/2); a != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
