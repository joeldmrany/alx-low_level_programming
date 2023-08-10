#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *d;

	a = strlen(s1);
	b = strlen(s2);

	
	if (n >= b)
	{
		d = malloc((a * sizeof(char)) + (b * sizeof(char)));
		if (d == NULL)
		{
			return (NULL);
		}
		d[a+1] = '\0';
		strncpy(d, s1, a);
		strncpy(d + a, s2, n);
		return (d);
	}
	else
	{
		d = malloc((a * sizeof(char)) + (n * sizeof(char)));
		if (d == NULL)
		{
			return (NULL);
		}
		d[a + 1] = '\0';
		strncpy(d, s1, a);
		strncpy(d + a, s2, n);
		return (d);
	}
}
