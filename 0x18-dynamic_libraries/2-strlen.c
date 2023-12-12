#include "main.h"

/**
 * _strlen - the function name
 *@s: function parameter
 *Return: length of a string
 */
int _strlen(char *s)
{
	int i;
	int total = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		total++;
	}
	return (total);
}
