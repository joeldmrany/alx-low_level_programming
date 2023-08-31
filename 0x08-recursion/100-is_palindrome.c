#include "main.h"
/**
 * is_palindrome - check if string is palindrome of not
 * @s: the string
 * Return: 1 if the string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int b;
	int a = 0;

	if (*s != '\0')
	{
		a++;
		is_palindrome(s + 1);
	}
	b = a / 2;
	if (s[b - 1] == s[b + 1])
		return (1);
	else
		return (0);
}
