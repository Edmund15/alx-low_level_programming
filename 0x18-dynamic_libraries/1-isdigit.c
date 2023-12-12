#include "main.h"

/**
  *_isdigit - function that checks for a digit.
  *@c: The number to be checked
  *Return: Returns 1 if c is a digit or Returns 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
