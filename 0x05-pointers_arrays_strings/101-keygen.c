#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
* main - Generates a random valid password for the program 101-crackme.
*
* Return: Always 0.
*/
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i, ascii_value;
	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		do
		{
			ascii_value = rand() % 94 + 33;
		} while ((ascii_value >= 48 && ascii_value <= 57) ||
			(ascii_value >= 65 && ascii_value <= 90) ||
			(ascii_value >= 97 && ascii_value <= 122) ||
			(ascii_value == 127));

	password[i] = (char) ascii_value;
    }

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
