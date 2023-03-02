#include "main.h"
#include <stdio.h>

/**
* cap_string - Capitalizes all words of a string
*
* @str: The string to be capitalized
*
* Return: A pointer to the resulting string
*/
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == sep[0] || str[i - 1] == sep[1] ||
			str[i - 1] == sep[2] || str[i - 1] == sep[3] || str[i - 1] == sep[4] ||
			str[i - 1] == sep[5] || str[i - 1] == sep[6] || str[i - 1] == sep[7] ||
			str[i - 1] == sep[8] || str[i - 1] == sep[9])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
