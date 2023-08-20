#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program the add all arguments
 * @argc: Number of arguments
 * @argv: argument
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, a, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (a = 0; a < length; a++)
			{
				if (isdigit(*(ptr + a)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	}
	return (0);
}
