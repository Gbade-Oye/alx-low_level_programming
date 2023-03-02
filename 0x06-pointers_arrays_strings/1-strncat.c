#include "main.h"
#include <stdio.h>

/**
* _strncat - Concatenates two strings.
* @dest: Destination string.
* @src: Source string.
* @n: Maximum number of bytes to use from src.
* Return: Pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
  	  }

	dest[i] = '\0';

	return (dest);
}
