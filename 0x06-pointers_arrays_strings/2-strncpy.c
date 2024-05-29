#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strncpy - function to copy strings like strncpy
 * @dest: destination
 * @src: the source
 * @n: the number of chars
 * Return: chars
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for( i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for(; i < n; i++)
	dest[i] = '\0';
	return dest;
}
