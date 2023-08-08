#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creater pointer array
 * @size: is an unsigned int
 * @c: is the char
 * Return: c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *nea;

	if (size < 1)
	{
		return (NULL);
	}
	nea = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		nea[i] = c;
	}
	return (nea);
}
