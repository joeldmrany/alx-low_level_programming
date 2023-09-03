#include <stdio.h>
/**
 * print_array - prints the array
 * @a: the array
 * @n: the number of arrays
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b == n - 1)
			printf("%d", a[b]);
		else
			printf("%d, ", a[b]);
	}
}
