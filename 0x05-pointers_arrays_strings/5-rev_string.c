#include "main.h"
#include <string.h>
/**
 * rev_string - reverse the string
 * @s: the string
 */
void rev_string(char *s)
{
	int start, end, length;
	char temp;

	length = strlen(s);
	start = 0;
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
