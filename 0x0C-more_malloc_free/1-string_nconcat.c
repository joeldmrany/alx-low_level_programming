#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatinate it
 * @s1: first string
 * @s2: second string
 * @n: the free space for each one
 * Return: new space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a, b, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = strlen(s1);
	b = strlen(s2);
	if (n >= b)
	{
		c = malloc(sizeof(char) * (a + b + 1));
		if (c == NULL)
			return (NULL);
		for (i = 0; i < a; i++)
		{
			c[i] = s1[i];
		}
		for (j = 0; j < b && s2[j] != '\0'; j++)
		{
			c[i++] = s2[j];
		}
		c[i] = '\0';
	}
	if (n < b)
	{
		c = malloc(sizeof(char) * (a + n + 1));
		if (c == NULL)
			return (NULL);
		for (i = 0; i < a; i++)
		{
			c[i] = s1[i];
		}
		for (j = 0; j < n && s2[j] != '\0'; j++)
			c[i++] = s2[j];
		c[i] = '\0';
	}
	return (c);
}

