#include <stdio.h>

/**
  *main - print its name, follow by a new name
  *@argc: number of command line arguments
  *argv: array that contains the command line arg..
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
