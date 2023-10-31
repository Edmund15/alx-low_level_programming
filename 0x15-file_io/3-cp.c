#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print an error message to the
 * standard error and exit with a code.
 * @code: The exit code.
 * @message: The error message.
 * @extra: Additional information to display.
 */
void print_error(int code, const char *message, const char *extra)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, extra);
	exit(code);
}

/**
 * open_files - Open source and destination files
 * and return their file descriptors.
 * @source: The source file name.
 * @destination: The destination file name.
 * Return: An array containing the source and destination file descriptors.
 */
int *open_files(const char *source, const char *destination)
{
	int *fd_pair = malloc(2 * sizeof(int));
	int fd_from, fd_to;

	fd_from = open(source, O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, "Error: Can't read from file", source);
	}
	fd_to = open(destination, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |
		    S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error(99, "Error: Can't write to file", destination);
	}
	fd_pair[0] = fd_from;
	fd_pair[1] = fd_to;
	return (fd_pair);
}

/**
 * copy_data - Copy data from the source file to the destination file.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 * @source: The source file name.
 * @destination: The destination file name.
 * Return: 0 on success.
 */
int copy_data(int fd_from, int fd_to, const char *source,
		const char *destination)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error(99, "Error: Can't write to file", destination);
		}
	}

	if (bytes_read == -1)
	{
		print_error(98, "Error: Can't read from file", source);
	}
	return (0);
}

/**
 * close_files - Close source and destination file descriptors.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 * @source: The source file name.
 * @destination: The destination file name.
 * Return: 0 on success.
 */
int close_files(int fd_from, int fd_to, const char *source,
		const char *destination)
{
	if (close(fd_from) == -1)
	{
		print_error(100, "Error: Can't close fd", source);
	}

	if (close(fd_to) == -1)
	{
		print_error(100, "Error: Can't close fd", destination);
	}
	return (0);
}

/**
 * main - Copy data from one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int *fd_pair;
	int fd_from, fd_to;

	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to", "");
	}

	fd_pair = open_files(argv[1], argv[2]);
	if (fd_pair == NULL)
	{
		return (98);
	}
	fd_from = fd_pair[0];
	fd_to = fd_pair[1];

	copy_data(fd_from, fd_to, argv[1], argv[2]);
	close_files(fd_from, fd_to, argv[1], argv[2]);
	free(fd_pair);
	return (0);
}

