#include "function_pointers.h"
/**
 * int_index - function
 * @array: the array
 * @size: the size
 * @cmp: the compare function
 * Return: integer
 */
int int_index(int *array, int size, int (cmp)(int))
{
	int i;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
