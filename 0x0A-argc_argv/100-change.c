#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);

	if (a < 0)
		printf("0\n");
	else
	{
		b = 0;

		while (a >= 25)
		{
			a -= 25;
			b++;
		}
		while (a >= 10)
		{
			a -= 10;
			b++;
		}
		while (a >= 5)
		{
			a -= 5;
			b++;
		}
		while (a >= 2)
		{
			a -= 2;
			b++;
		}
		while (a >= 1)
		{
			a -= 1;
			b++;
		}
		printf("%d\n", b);
	}
	return (0);
}
