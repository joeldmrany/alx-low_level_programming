#include "main.h"
/**
 * string_toupper - revers char case
 * @s: string
 *
 * Return: string upper
 */
char *string_toupper(char *s)
{
	int i;
	
	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (s);
}

