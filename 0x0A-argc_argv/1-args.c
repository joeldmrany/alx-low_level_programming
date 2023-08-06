#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: number
 * @argv: char
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
