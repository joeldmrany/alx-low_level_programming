#include "function_pointers.h"
/**
 * array_iterator - function pointer
 * @array: an array
 * @size: the size of string
 * @action: the action of it
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *the_end = array + size - 1;

	if (array && size && action)
		while (array <= the_end)
			action(*array++);
}
