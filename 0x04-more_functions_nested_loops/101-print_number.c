#include "main.h"

/**
 * print_number - Print an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		_putchar('-');
		k = -n;
	}
	else
	{
		k = n;
	}

	if (k / 10 != 0)
	{
		print_number(k / 10);
	}
	_putchar(k % 10 + '0');
}
