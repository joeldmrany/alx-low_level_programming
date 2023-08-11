#include "main.h"
/**
 * _strlen_recursion - print number of letters in the sentence
 * @s: the sentence
 * Return: number of words
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(*s);
	}
	else
	{
		return(1 + _strlen_recursion(s + 1));
	}
}
