#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: the number that will start from
 */
void print_to_98(int n)
{
	int a;

	if (n == 98)
	{
		printf("98\n");
		
	}
	else if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a == 98)
				printf("98\n");
			else
				printf("%d, ", a);
		}
	}
	else if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a == 98)
				printf("98\n");
			else
				printf("%d, ", a);
		}
	}
}
