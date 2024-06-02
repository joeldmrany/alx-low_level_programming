#include "function_pointers.h"
/**
 * int_index - return the first element doesn't return 0
 * @array: the array of elements
 * @size: size of the array
 * @cmp: function pointer
 * Return: the first element doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, test, num = 0;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			test = cmp(array[i]);
			if (test != 0)
			{
				num = i;
				break;
			}
		}
		return (num);
	}
	if (num == 0)
		return (-1);
	else
		return (-1);
}
