#include "main.h"
/**
 * _puts: prints the string
 * @str: string
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
	{
		_putchar(str[a]);
	}
}
