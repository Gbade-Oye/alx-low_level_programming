#include "main.h"

/**
* main - entry point of the program
*
* Return: always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');

	return (0);
}
