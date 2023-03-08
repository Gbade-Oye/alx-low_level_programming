#include "main.h"
#include <stdio.h>

/**
* _strpbrk - Locates the first occurrence in the string s
* of any of the bytes in the string accept.
*
* @s: The string to search.
* @accept: The string containing the bytes to search for.
*
* Return: A pointer to the byte in s that matches one of the bytes
* in accept, or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
