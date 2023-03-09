#include "main.h"

/**
* set_string - sets the value of a pointer to a char
* @s: double pointer to the char
* @to: pointer to the char to be assigned
*/
void set_string(char **s, char *to)
{
	*s = to;
}
