#include "main.h"
#include <string.h>
/**
 * _strcpy - copy the src to dest
 * @src: the source string
 * @dest: the destination string
 * Return: the dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, a;

	length = strlen(src);
	for (a = 0; a <= length; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
