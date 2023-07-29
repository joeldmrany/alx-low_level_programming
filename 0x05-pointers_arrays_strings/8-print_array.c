#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the array
 * @a: the array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}

