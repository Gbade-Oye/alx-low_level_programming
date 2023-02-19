#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase, and then in uppercase,
*              followed by a new line
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char letter;

	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* Print uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	/* Print new line character */
	putchar('\n');

	return (0);
}
