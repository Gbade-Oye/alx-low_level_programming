#include "main.h"

/**
* rev_string - Reverses a string
* @s: String to be reversed
*/
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0, j = 0; s[j + 1]; j++)
		continue;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
