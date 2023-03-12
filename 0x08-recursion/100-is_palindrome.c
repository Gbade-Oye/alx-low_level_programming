#include "main.h"

int _is_palindrome_helper(char *s, int start, int end);

/**
* is_palindrome - checks if a string is a palindrome
* @s: string to check
*
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;

	if (len == 0 || len == 1)
		return (1);

	return (_is_palindrome_helper(s, 0, len - 1));
}

/**
* _is_palindrome_helper - recursively checks if a string is a palindrome
* @s: string to check
* @start: start index of substring
* @end: end index of substring
*
* Return: 1 if s is a palindrome, 0 otherwise
*/
int _is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (*(s + start) != *(s + end))
		return (0);
	return (_is_palindrome_helper(s, start + 1, end - 1));
}
