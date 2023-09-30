#include <stdio.h>

/**
  *main - print its name, follow by a new name
  *@argc: number of command line arguments
  *@argv: Array containing the command-line arguments
  *Return: always 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
