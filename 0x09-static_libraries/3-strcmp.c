#include "main.h"
/**
  * _strcmp - Compares two strings.
  *@s1: first parameter
  *@s2: second parameter
  *Return: Return: An integer less than, equal to, or
  *greater than zero if s1 is found,
  *respectively, to be less than, to match, or be greater than s2.
  */
int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
		k++;
	}
	return (0);
}

