#include "main.h"

/**
 * print_triangle - function that prints a triangle followed by a new line.
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int x,y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			  for (y = size - x; y > 1; y--)
			  {
				  _putchar(' ');
			  }
			  for (y = 0; y <= x; y++)
			  {
				  _putchar('#');
			  }
			  _putchar('\n');
		}
	}
}
