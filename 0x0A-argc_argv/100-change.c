#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 1 of 0
 */
int main(int argc, char **argv)
{
	int a, b, i;
	int coins[] = {25, 10, 5, 2, 1};

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
		for (i = 0; i < 5; i++)
		{
			while (a >= coins[i])
			{
				a -= coins[i];
				b++;
			}
		}
		printf("%d\n", b);
	}
	return (0);
}
