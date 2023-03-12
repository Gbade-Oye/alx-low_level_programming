#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to calculate the square root of
*
* Return: the natural square root of n, or -1 if n does not have a
* natural square root
*/
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
* sqrt_helper - recursively calculates the natural square root of a number
* @n: the number to calculate the square root of
* @i: the integer to start checking from
*
* Return: the natural square root of n, or -1 if n does not have a
* natural square root
*/
int sqrt_helper(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n < i * i)
		return (-1);
	else
		return (sqrt_helper(n, i + 1));
}
