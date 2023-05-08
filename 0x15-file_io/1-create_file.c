#include "main.h"

/**
 * create_file - function that creates a file with specific parameters
 * @filename: file to create
 * @text_content: NULL terminated string
 * Return: if file exists truncate, if null -1 if
 * if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)

{
	int fd;
	size_t len;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		len = strlen(text_content);

	if ((ssize_t)len != write(fd, text_content, len))
		{
		close(fd);
		return (-1);
		}
	}

	close(fd);
	return (1);

}
