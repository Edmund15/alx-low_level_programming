#include "main.h"

/**
  *prime_n - calculate if its a prime number
  *@a: the input
  *@b: the divisor
  *Return: (0)
  */
int prime_n(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_n(a, b + 1));
}

/**
  *is_prime_number - the function name
  *@n: the input integer
  *Return: 1 if interger is prime number otherwise 0
  */
int is_prime_number(int n)
{
	return (prime_n(n, 2));
}
