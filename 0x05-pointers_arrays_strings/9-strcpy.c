#include "main.h"
/**
 * _strcpy - copying
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
