#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a;

	if (argc == 3)
	{
		a = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", a);
	}
	else
		printf("Error\n");
	return (0);
}
