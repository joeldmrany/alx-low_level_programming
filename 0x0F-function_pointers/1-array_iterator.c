#include "function_pointers.h"
/**
 * array_iterator - function that plays with array
 * @action: functino pointer
 * @array: the array
 * @size: the size
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
