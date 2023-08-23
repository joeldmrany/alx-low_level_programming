#include "main.h"
#include <stdio.h>
/**
 * print_sum_of_them - prints the sum of numbers multiples by 3 or 5
 */

void print_sum_of_them(void)
{
	int a, sum;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0)
		{
			sum += a;
		}
		else if ((a % 5) == 0)
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
}
/**
 * main - the main function
 * Return: 0
 */
int main(void)
{
	print_sum_of_them();
	return (0);
}
