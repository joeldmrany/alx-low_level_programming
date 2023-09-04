#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: the size of the array
 * @c: the name of it
 * Return: NULL OR ARR
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	arr = malloc(size * sizeof(char));
	if (arr == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (a = 0; a <= size; a++)
	{
		arr[a] = c;
	}
	return (arr);
}
