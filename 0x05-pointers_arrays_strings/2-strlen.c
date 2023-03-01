#include "main.h"

/**
* _strlen - returns the length of a string
* @s: pointer to the string
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
* reset_to_98 - updates the value of an integer to 98
* @n: pointer to the integer to be updated
*
* Return: void
*/
void reset_to_98(int *n)
{
	*n = 98;
}
