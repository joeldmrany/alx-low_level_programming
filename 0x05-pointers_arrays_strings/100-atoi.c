#include "main.h"
#include <string.h>
/**
 * _atoi - convert the char into int
 * @s: the number
 * Return: the number
 */
int _atoi(char *s)
{
	int length, sign, i, result, a;

	sign = 1;
	i = 0;
	result = 0;
	length = strlen(s);

	for (a = 0; a <= length; a++)
	{
		while (s[i] == ' ')
		{
			i++;
		}
		while (s[i] == '+' || s[i] == '-')
		{
			if (s[i] == '-')
				sign *= (-1);
			i++;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			i++;
		}
	}
	return (result * sign);
}
