#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: adds positive numbers.
 * @argv: Array that contains the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);

			if (num == 0 && argv[i][0] != '0')
			{
				printf("Error\n");
				return (1);
			}

			if (num <= 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
