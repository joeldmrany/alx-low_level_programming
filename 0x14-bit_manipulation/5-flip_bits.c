#include "main.h"

/**
 * flip_bits - diff
 * @n: num1
 * @m: numb2
 * Return: diff
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b_diff, sk;
	int i, digit;
	unsigned int diff;

	diff = 0;
	sk = 0;
	b_diff = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		sk = 1 << i;
		digit = (b_diff & sk) >> i;
		if (digit == 1)
			diff++;
	}
	return (diff);
}
