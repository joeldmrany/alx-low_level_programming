#include "main.h"
#include <string.h>
#include <stdlib.h>


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
	strcpy(c, str);
	return (c);
}
