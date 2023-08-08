#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main(int argc, char **argv)
{
	int a, b;

	if (argc >= 1)
	{
		for (a = 1; a <= argc; a++)
		{
			if (atoi(argv[a]) <= '9' && atoi(argv[a]) >= '0')
			{
				b += atoi(argv[a]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", b);
	}
	else if (argc <= 1)
	{
		printf("0\n");
	}
	return (0);
}
