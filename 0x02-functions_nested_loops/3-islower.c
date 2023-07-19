#include "main.h"
/**
 * _islower - Ok
 * Return: 1 0
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
