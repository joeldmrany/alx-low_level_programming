#include "main.h"
/**
 * rev_string - reverse the string
 * @s: the string
 */
void rev_string(char *s)
{
	int a, b;
	char str;

	for (a = 0; s[a]; a++)
	{
	}
	for (b = a - 1; s[b]; b--)
	{
		str = s[b];
		s[b] = str;
	}
}
