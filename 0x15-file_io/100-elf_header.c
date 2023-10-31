#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>

/**
 * print_error - Print an error message to stderr
 * and exit with status 98.
 * @msg: The error message to display.
 */
void print_error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header - Print the information from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void print_elf_header(Elf64_Ehdr *header)
{
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x%c", header->e_ident[i], (i < EI_NIDENT - 1) ? ' ' : '\n');
	}
	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");

	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");

	printf("  Version:                           
			%d (current)\n", header->e_ident[EI_VERSION]);

	printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);

	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header->e_type);

	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the ELF header program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		print_error("Error: Cannot open ELF file");
	}

	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error("Error: Cannot read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Error: Not an ELF file");
	}

	print_elf_header(&header);
	close(fd);
	return (0);
}
