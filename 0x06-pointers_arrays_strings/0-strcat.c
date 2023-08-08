#include "main.h"
#include <string.h>
#include <stdlib.h>

char *_strcat(char *dest, char *src)
{
	int a, b, c;
	char *d;

	a = strlen(dest);
	b = strlen(src);
	c = a + b;
	d = malloc(c * sizeof(char) + 1);

	strcpy(d, dest);
	strcpy(d + a, src);
	d[c] = '\0';
	dest = malloc(c * sizeof(char) + 1);
	strcpy(dest, d);
	return (d);
}
