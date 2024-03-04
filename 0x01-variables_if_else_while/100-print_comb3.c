#include <stdio.h>
/**
 * main - the main function
 * i: the counter
 * Return: (0)
 */
int main(void)
{
	int i, x;

	for (i = 48; i < 58; i++)
	{
		for (x = 48; x < 58; x++)
		{
			if (i < x)
			{
				putchar(i);
				putchar(x);
				if ((i != 56) || (x != 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
