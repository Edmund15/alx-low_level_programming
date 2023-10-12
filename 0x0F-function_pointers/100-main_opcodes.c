#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int num_bytes)
{
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("Num Bytes: %d\n", num_bytes);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	int num_bytes = atoi(argv[1]);
	print_opcodes(num_bytes);
	return 0;
}
