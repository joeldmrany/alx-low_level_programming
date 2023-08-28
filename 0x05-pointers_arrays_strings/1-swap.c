#include "main.h"
/**
 * swap_int - swap the two integers
 * @a: pointer to first number
 * @b: pointer to second number
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
