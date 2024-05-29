#include "main.h"
/**
 * reverse_array - reverse array
 * @a: number
 * @n: size
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int b, c, d;

	c = 0;
	d = n - 1;
	while (c < d)
	{
		b = *(a + c);
		*(a + c) = *(a + d);
		*(a + d) = b;
		c++;
		d--;
	}
}
