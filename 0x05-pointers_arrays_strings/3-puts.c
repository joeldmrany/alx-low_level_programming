#include "main.h"
/**
 * _puts - prints the string with new line
 * @str: string which will be printed
 * Return: void
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
