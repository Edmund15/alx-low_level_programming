#include "main.h"

/**
 * print_square - function that prints a square followed by a new line.
 * @size: The size of the square
 */
void print_square(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int x, y;
        for (x = 0; x < size; x++)
        {
            for (y = 0; y < size; y++)
            {
                if (x < 2 || x >= size - 1)
                    _putchar('#');
                else
                    _putchar(' ');
            }
            _putchar('\n');
        }
    }
}

