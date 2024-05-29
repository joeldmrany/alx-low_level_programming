#include "main.h"
/**
 * cap_string - make it capital
 * @s: string
 * Return: capital string
 */
char *cap_string(char *s)
{
	int i, k;
	int b[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) = *(s + i) - 32;
			}
			else
			{
				for (k = 0; k <= 12; k++)
				{
					if (b[k] == *(s + i - 1))
					{
						*(s + i) = *(s + i) - 32;
					}
				}
			}
		}
	i++;
	}
	return (s);
}
