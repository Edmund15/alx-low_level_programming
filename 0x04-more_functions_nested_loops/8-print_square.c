#include "main.h"

/**
  *print_square -  function that prints a square
  *@size: The number of square/number of times
  *Return: empty
  */
void print_square(int size)
{
	int x, y;

	 if (size <= 0)
         {
                 _putchar('\n');
         }
         else
          {
                  for (x = 0; x < size; x++)
                 {
                          for (y = 0; y < size; y++)
			  {
                                  if (x < 2 || x >= size - 1 || y < 2 || y >= size - 1)
                {
                    _putchar('#');
                }
                else
                {
                    _putchar(' ');
                }
            }
            _putchar('\n');
        }
    }
}
