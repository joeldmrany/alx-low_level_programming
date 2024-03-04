#include "main.h"
/**
 * _islower - checks if the letter is lower case of not
 * c: the letter that will be checked
 * Return: 1 if it's lower 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
