#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The value for the times table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int result = i * j;

				if (j != 0)
				{
					_putchar(' ');
					if (result < 10)
						_putchar(' ');
				}

				if (result < 10)
				{
					_putchar(result + '0');
				}
				else
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

