#include "main.h"
/**
 * leet - vowel will be int
 * @s: string
 * Return: changed
 */
char *leet(char *s)
{
	char b[] = "aeotlAEOTL";
	char t[] = "4307143071";
	int i = 0;
	int k;

	while (*(s + i) != '\0')
	{
		for (k = 0; k <= 9; k++)
		{
			if (*(s + i) == b[k])
			{
				*(s + i) = t[k];
			}
		}
		i++;
	}
	return (s);
}
