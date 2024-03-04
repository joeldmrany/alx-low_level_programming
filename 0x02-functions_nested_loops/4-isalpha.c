#include "main.h"
/**
 * _isalpha - checks if the letter is letter or not
 * @c: the letter that will be checked
 * Return: 1 if it's lower 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
