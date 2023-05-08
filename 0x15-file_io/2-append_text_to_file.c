#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: nulle terminator
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, bytes_output = 0, success = -1;

	if (!filename)
		return (success);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (success);

	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
		bytes_output = write(fd, text_content, len);
	}

	if (bytes_output == len)
		success = 1;

	close(fd);
	return (success);
}
