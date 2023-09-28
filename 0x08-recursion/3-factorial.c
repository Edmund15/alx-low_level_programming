#include "main.h"

/**
  *factorial - the function name
  *@n: the string parameter
  *Return: n is lower than 0, the function
  * should return -1 to indicate an error
  */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
