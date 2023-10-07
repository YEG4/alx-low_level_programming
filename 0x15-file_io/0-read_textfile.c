#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/write - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, buf, letters);
	write = write(STDOUT_FILENO, buf, read);

	if (open == -1 || read == -1 || write == -1 || write != read)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(open);

	return (write);
}