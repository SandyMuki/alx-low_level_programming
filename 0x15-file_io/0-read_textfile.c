#include "main.h"
#include <unistd.h>

/**
 * read_textfile - reads and prints textfile to the POSIX standard output
 * @filename: file to be opened and read
 * @letters: number of letters to read and print
 *
 * Return: if can't open file, null or fail return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	ssize_t bytes_read, bytes_written;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters + 1));
	if (buff == NULL)
	{
		return (0);
	}
	bytes_read = read(fd, buff, letters);
	if (bytes_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
		free(buff);
		close(fd);

	return (bytes_written);
}
