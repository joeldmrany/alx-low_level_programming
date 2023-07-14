#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - good
 *Return:(0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
		if (n < 0)
	{
		printf("is negative\n");
			}
	else if (n == 0)
	{
		printf("is zero\n");
			}
	else
	{
		printf("is positive\n");
			}

	return (0);
}
