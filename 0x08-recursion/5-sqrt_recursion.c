#include "main.h"

/**
  *sqrt_a - return the natural number
  *@a: input number
  *@b: sqaure root number
  *Return: square root or -1
  */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
  *_sqrt_recursion - the function name
  *@n: the natural number
  *Return: the result of the square root
  */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
