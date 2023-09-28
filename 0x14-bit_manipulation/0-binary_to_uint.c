#include "main.h"
/**
 * binary_to_uint - changes the binary number to integer one
 * @b: the binary number
 * Return: the integer number if b is binary one
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;
	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = (result * 2) + (*b++ - '0');
	}
	return (result);
}
