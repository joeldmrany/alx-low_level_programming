#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int k = 0, j, i;

	if (!b)
		return (0);

	for(i=0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	for(j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
		{
			num += 1 << k;
		}
		k++;
	}
	return num;
}
