#include "main.h"

/**
 * clear_bit - make it 0
 * @n: number
 * @index: an index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sk;

	sk = 0;
	if (index > 63)
		return (-1);
	sk = 1 << index;
	sk = ~sk;
	*n =  *n & sk;
	return (1);
}
