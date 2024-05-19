#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strncat - function near to strcat and that is all you need
 * @dest: destination
 * @src: source
 * @n: number of bits
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, c;
	char *d;

	a = strlen(dest);
	b = strlen(src);
	c = a + b;
	if (n >= c)
	{
		d = malloc((c + 1) * sizeof(char));
		strcpy(d, dest);
		strcpy(d + a, src);
		d[c] = '\0';
		strcpy(dest, d);
		return (d);
	}
	else
	{
		d = malloc((c + 1) * sizeof(char));
		strcpy(d, dest);
		strncpy(d + a, src, n);
		d[a + n] = '\0';
		strcpy(dest, d);
		return (d);
	}
}
