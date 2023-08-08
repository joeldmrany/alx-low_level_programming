#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: pointer char
 * Return: c
 */

char *_strdup(char *str)
{
	int a;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	a = strlen(str);
	c = malloc(a * sizeof(char) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	strcpy(c, str);
	return (c);
}
