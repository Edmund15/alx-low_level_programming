#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and print
 * Return: The actual number of letters it could
 * read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (rd);
}

