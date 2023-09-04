#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - duplibate the 2 strings
 * @s1: first string
 * @s2: second string
 * Return: new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = strlen(s1);
	b = strlen(s2);
	string = malloc(((a + b) * sizeof(char)) + 1);
	if (string == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
	{
		string[c] = s1[c];
	}
	d = (a + b);
	b = 0;
	while (c < d)
	{
		string[c] = s2[b];
		b++;
		c++;
	}
	return (string);
}
