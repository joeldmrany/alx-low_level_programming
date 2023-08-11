#include "main.h"
/**
 * premo - check if the number is prime or not
 * @a: the number
 * @b: another number
 * Return: 1 if the number is prime, 0 if it's not
 */

int premo(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	else
		return (premo(a, b + 1));
}
/**
 * is_prime_number - check if the number is prime or not
 * @n: the number
 * Return: 1 if the number is prime, 0 if it's not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (premo(n, 2));
}
