#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - function
 * @argc: integer
 * @argv: char
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int result;
	int a;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
