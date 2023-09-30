#include "main.h"
/**
  *_strchr - the function name
  *@s: The string to search.
  *@c: The character to find.
  *Return: If the character is found, return a pointer to it;
  *       otherwise, return NULL.
  */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
