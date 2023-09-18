#include "main.h"

/**
 *rev_string - the function name
 *@s: function parameter
 */
void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		char a;

		a = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = a;
	}
}
