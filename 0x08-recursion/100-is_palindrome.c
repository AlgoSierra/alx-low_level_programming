#include "main.h"
/**
 * is_prime_number - function that checks if a given integer
 * is a prime number or not
 * @n: integer
 *
 * Return: 1
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
