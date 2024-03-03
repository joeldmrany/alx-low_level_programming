#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the main function
 * n: the varible number
 * Return: (0)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	else if ((n < 6) && (n != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	}
	return (0);
}
