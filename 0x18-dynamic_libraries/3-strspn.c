#include "main.h"

/**
  *_strspn - the function name
  *@s: the first parameter
  *@accept: the second parameter
  *Return: characters countered
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int y;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (y = 0; s[i] != accept[y]; y++)
		{
			if (accept[y] == '\0')
				return (i);
		}
	}
	return (0);
}
