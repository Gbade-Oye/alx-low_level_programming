#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* main - Entry point
*
* Description: finds and prints the largest prime factor of the number 612852475143
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long n = 612852475143;
	int i;

	while (n % 2 == 0) {
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2) {
		while (n % i == 0) {
			n /= i;
		}
	}

	if (n > 2) {
		putchar(n + '0');
	}
	putchar('\n');

	return 0;
}
