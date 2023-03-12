#include "main.h"

/**
* _strlen - returns the length of a string
* @s: the string to measure
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen(s + 1) + 1);
}

/**
* _is_palindrome_helper - recursively checks if a string is a palindrome
* @s: the string to check
* @i: the current index from the beginning of the string
* @j: the current index from the end of the string
*
* Return: 1 if s is a palindrome, 0 otherwise
*/
int _is_palindrome_helper(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (_is_palindrome_helper(s, i + 1, j - 1));
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to check
*
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int len = _strlen(s);
	return (_is_palindrome_helper(s, 0, len - 1));
}
