#include "main.h"

/**
* more_numbers - prints the numbers 0-9 ten times
*/
void more_numbers(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			num = j;
			if (j > 9)
			{
				_putchar((num / 10) + '0');
				num %= 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
