#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - make 2 dimention array
 * @width: the width
 * @height: the height
 * Return: the array
 */
int **alloc_grid(int width, int height)
{
	int a, b, **c;

	if (width <= 0 || height <= 0)
		return (NULL);
	c = (int **)malloc(height * sizeof(int *));
	if (c == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		c[a] = (int *)malloc(width * sizeof(int));
		if (c[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(c[b]);
			}
			free(c);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			c[a][b] = 0;
		}
	}
	return (c);
}
