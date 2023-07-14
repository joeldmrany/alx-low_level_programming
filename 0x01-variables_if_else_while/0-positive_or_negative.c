#include <stdio.h>
/**
 *main - is good
 *Return: (0)
 */
int main(void)
{
	int n;

	n = 10;
	if (n < 0)
	{
		printf("%d is negative\n", n);
			}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
			}
	else
	{
		printf("%d is positive\n", n);
			}
	return (0);
}
