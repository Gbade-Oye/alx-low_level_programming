#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse
* @s: The string to print
*/
void _print_rev_recursion(char *s)
{
	/* Base case: If the string is empty, return */
	if (*s == '\0')
		return;

	/* Recursive case: Print the last character of the string, then call
		the function again with the remaining string */
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
