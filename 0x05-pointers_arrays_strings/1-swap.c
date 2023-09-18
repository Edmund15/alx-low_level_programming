#include "main.h"
/**
 *swap_int - the function name
 *@a: the first integer
 *@b: the second integer
 *Return: always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
