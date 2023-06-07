#include "main.h"

/**
* is_prime_number - Checks if a number is prime.
* @n: The number to check.
*
* Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return 0;

	return prime_helper(n, 2);
}

/**
* prime_helper - Recursive helper function to check if a number is prime.
* @n: The number to check.
* @i: The current divisor to check.
*
* Return: 1 if the number is prime, 0 otherwise.
*/
int prime_helper(int n, int i)
{
	if (n == i)
		return 1;

	if (n % i == 0)
		return 0;

	return prime_helper(n, i + 1);
}
