#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the file
 * @text_content: A pointer to a string
 *
 * Return: If the function fails - -1.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
