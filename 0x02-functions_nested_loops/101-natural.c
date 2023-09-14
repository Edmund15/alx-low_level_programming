#include <stdio.h>
/**
  * main - Entry point.
  *Description: program that computes and prints the sum of all the
  *multiples of 3 or 5 below 1024 (excluded).
  * Return: always 0
  */
int main(void)
{
	int sum = 0;
	int limit = 1024;


	for (int i = 3; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);
	return (0);
}


