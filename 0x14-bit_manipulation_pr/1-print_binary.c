#include "main.h"

/**
 * print_binary - int into bits
 * @n: number
 * Return: bits
 */
void print_binary(unsigned long int n)
{
	int i, k;
	unsigned long int te, sk = 0;

	k = 0;
	if (n == 0)
		_putchar('0');
	te = n;

	for (k = 0; te != 0; k++)
		te = te >> 1;

	for (i = k - 1; i >= 0; i--)
	{
		sk = 1 << i;
		if ((n & sk) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
