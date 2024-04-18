#include "main.h"
/**
 * swap_int - swaps integers
 * @a: var
 * @b: var
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
