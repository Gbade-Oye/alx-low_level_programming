#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
    int i, num_digits, digit, divisor;

    if (n <= 98)
    {
        for (i = n; i < 98; i++)
        {
            if (i < 0)
            {
                putchar('-');
                i = -i;
            }
            else if (i == 0)
            {
                putchar('0');
                continue;
            }

            divisor = 1;
            while (i / divisor > 0)
                divisor *= 10;

            divisor /= 10;

            while (divisor > 0)
            {
                digit = i / divisor;
                i %= divisor;
                divisor /= 10;
                putchar(digit + '0');
            }

            putchar(',');
            putchar(' ');
        }
    }
    else
    {
        for (i = n; i > 98; i--)
        {
            num_digits = 0;
            if (i < 0)
            {
                putchar('-');
                i = -i;
            }
            else if (i == 0)
            {
                putchar('0');
                continue;
            }

            divisor = 1;
            while (i / divisor > 0)
            {
                num_digits++;
                divisor *= 10;
            }

            divisor /= 10;

            while (divisor > 0)
            {
                digit = i / divisor;
                i %= divisor;
                divisor /= 10;
                putchar(digit + '0');
            }

            if (num_digits < 2)
                putchar(' ');

            putchar(',');
            putchar(' ');
        }
    }

    putchar('9');
    putchar('8');
    putchar('\n');
}
