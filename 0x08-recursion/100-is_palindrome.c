#include "main.h"

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to check.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return 1;

	return palindrome_helper(s, 0, len - 1);
}

/**
* palindrome_helper - Recursive helper function to check if a string is a palindrome.
* @s: The string to check.
* @start: The starting index of the substring to check.
* @end: The ending index of the substring to check.
*
* Return: 1 if the string is a palindrome, 0 otherwise.
*/
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return 1;

	if (s[start] != s[end])
		return 0;

	return palindrome_helper(s, start + 1, end - 1);
}

/**
* _strlen_recursion - Calculates the length of a string recursively.
* @s: The string to calculate the length of.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;

	return 1 + _strlen_recursion(s + 1);
}
