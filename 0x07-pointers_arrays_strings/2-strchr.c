#include "main.h"
/**
  *_strchr - the function name
  *@s: the first parameter
  *@c: the second parameter
  *Return: c
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
