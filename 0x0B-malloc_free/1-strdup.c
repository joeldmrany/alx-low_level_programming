#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - free space to string
 * @str: the string
 * Return: char
 */
char *_strdup(char *str)
{
	int a, b;
	char *string;

	a = strlen(str);
	string = malloc((a * sizeof(char)) + 1);
	if (string == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
	{
		string[b] = str[b];
	}
	return (string);
}
