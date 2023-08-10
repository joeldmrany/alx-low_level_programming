#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a, result;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > '1')
	{

		for (a = 0; a <= argc; a++)
		{
			if (atoi(argv[a]) <= '9' && atoi(argv[a]) >= '0')
			{
				result += atoi(argv[a]);
				printf("%d", result);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d", result);
	}
	return (0);
}
