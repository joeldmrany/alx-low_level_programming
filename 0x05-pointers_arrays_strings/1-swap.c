#include "main.h"
/**
 * swap_int - swaps integers
 * @a: will be b
 * @b: will be a
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
