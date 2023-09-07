#include "main.h"
/**
 * malloc_checked - do like malloc
 * @b: the space reserved
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
