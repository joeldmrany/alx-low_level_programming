#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int num1 = 0, num2 = 0, result, i, length;

  for (i = 0; n1[i] != '\0'; i++)
  {
    num1 = num1 * 10 + (n1[i] - '0');
  }

  for (i = 0; n2[i] != '\0'; i++)
  {
    num2 = num2 * 10 + (n2[i] - '0');
  }

  result = num1 + num2;

  length = snprintf(NULL, 0, "%d", result);
  if (length + 1 > size_r)
  {
    return (0);
  }

  snprintf(r, size_r, "%d", result);

  return r;
}