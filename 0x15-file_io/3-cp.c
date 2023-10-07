#include "main.h"
char *init_buffer(char *file);
void exit_file(int fd);

/**
 * init_buffer - Allocates 1024 bytes for a buf.
 * @file: The name of the file 
 *
 * Return: A pointer To the buf
 */
char *init_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write To %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * exit_file - Closes file descriptors.
 * @fd: The file descriptor To be closed.
 */
void exit_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file To another file.
 * @argc: The number of arguments
 * @argv: An array of pointers To the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 */
int main(int argc, char *argv[])
{
	int file, To, rd, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = init_buffer(argv[2]);
	file = open(argv[1], O_RDONLY);
	rd = read(file, buf, 1024);
	To = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read file file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wr = write(To, buf, rd);
		if (To == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write To %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		rd = read(file, buf, 1024);
		To = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buf);
	exit_file(file);
	exit_file(To);

	return (0);
}