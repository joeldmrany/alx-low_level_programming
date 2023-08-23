#include "main.h"
#include <stdio.h>


void print_sum_of_them(void)
{
	int a, sum;

	for (a = 0; a <= 1024; a++)
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

int main(void)
{
	print_sum_of_them();
	return (0);
}
