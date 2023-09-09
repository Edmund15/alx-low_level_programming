#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all possible different combinations of two digits.
 * Return: Always 0
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 8; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar(n + '0');
			putchar(m + '0');

			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
}
