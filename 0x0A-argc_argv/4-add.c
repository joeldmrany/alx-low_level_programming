#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: the argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, i, sum;

	sum = 0;
	for (a = 1; a < argc; a++)
	{
		for (i = 0; argv[a][i] != '\0'; i++)
		{
			if (!isdigit(argv[a][i]))
			{
				printf("Error\n");
				return (-1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
