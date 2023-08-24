#include <stdio.h>
/**
 * main - main function to print numbers form 1 to 100 if the number muliples by 3 printes Fizz if number multiples by 5 prints Buzz if it multiply by two of them prints FizzBuzz
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (((a % 3) == 0) && (a % 5) == 0)
			printf("FizzBuzz ");
		else
		{
			if ((a % 3) == 0)
				printf("Fizz ");
			else if ((a % 5) == 0)
				printf("Buzz ");
			else
				printf("%d ", a);
		}
	}
	return (0);
}
