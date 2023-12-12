#include "main.h"
/**
  *_memset - the function name
  *@s: first parameter
  *@b: second parameter
  *@n: third parameter
  *Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
