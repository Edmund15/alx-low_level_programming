#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times followed by
 *                      a new line.
 *
 * Description: This function uses a loop to print the lowercase alphabet 10
 * times, each time followed by a newline character.
 */
void print_alphabet_x10(void)
{
	int i, j;
	char letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';

		for (j = 0; j < 26; j++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
