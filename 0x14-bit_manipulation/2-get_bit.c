#include "main.h"

/**
 * get_bit - have bits
 * @n: number
 * @index: an index
 * Return: 0 or 1 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int sk;
	int num;

	sk = 0;
	if (index > 63)
		return (-1);

	sk = 1 << index;
	num = (n & sk) >> index;
	return (num);
}
