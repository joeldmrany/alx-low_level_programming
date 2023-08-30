#include "main.h"
/**
 * is_prime_number - check if n is prime or not
 * @n: the number
 * @c: the checker
 * Return: 1 if prime 0 if not
 */
int checker(int n, int c);
int is_prime_number(int n)
{
	return (checker(n, 2));
}
/**
 * checker - check the prime number
 * @n: the number
 * @c: the checker
 * Return: 1 or 0
 */
int checker(int n, int c)
{
	if (n == c && n > 1)
		return (1);
	else if (n % c == 0 || n <= 1)
		return (0);
	else
		return (checker(n, c + 1));
}
