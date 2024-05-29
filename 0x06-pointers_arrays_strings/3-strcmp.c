#include "main.h"
#include <string.h>
/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * Return: positive or negative or zero
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = strlen(s1);
	b = strlen(s2);

	if (a > b)
		return (15);
	else if (a == b)
		return (0);
	else
		return (-15);
}
