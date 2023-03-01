#include <stdio.h>
#include <math.h>

/**
* main - finds and prints the largest prime factor of 612852475143
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0 && i != n)
		{
			n /= i;
		}
	}

	_putchar(n % 10 + '0');
	_putchar('\n');

	return (0);
}
