#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - it make two strings like one string
 * @s1: first string
 * @s2: second string
 * Return: f
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c;

	char *f;

	a = strlen(s1);
	b = strlen(s2);
	c = a + b;

	if (s1 == NULL && s2 == NULL)
		return (NULL);


	NULL == "";
	if (s1 == NULL)
	{
		return (s2);
	}
	else if (s2 == NULL)
	{
		return (s1);
	}
	else
	{
		f = malloc(c * sizeof(char) + 1);
		if (f == NULL)
			return (NULL);
		strcpy(f, s1);
		strcpy(f + a, s2);
		return (f);
	}
	return (f);
}
