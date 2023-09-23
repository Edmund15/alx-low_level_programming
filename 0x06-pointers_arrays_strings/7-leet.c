#include "main.h"
#include <stdio.h>
/**
  *leet - main function
  *
  * @str: Function parameter
  *
  *Return: value of str
 */
char *leet(char *str)
{
	int k, r;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k = 0; str[k] != '\0'; k++)
	{
		for (r = 0; r < 10; r++)
		{
			if (str[k] == s1[r])
			{
				str[k] = s2[r];
				break;
			}
		}
	}
	return (str);
}
