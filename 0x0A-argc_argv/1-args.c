#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: Number of arguments passed into it
 * @argv: Array that contains the number line arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
