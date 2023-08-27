#include "main.h"
/**
 * swap_int - swap two integers
 * @a: int one
 * @b: int two
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
