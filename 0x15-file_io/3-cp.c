#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - program that copies the content of a file to another file
 * @argc: count
 * @argv: points to
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_to_dc, file_from_dc;
	ssize_t nread;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from_dc = open(argv[1], O_RDONLY);
	if (file_from_dc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to_dc = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to_dc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nread = read(file_from_dc, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to_dc, buffer, nread) == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_from_dc);
		exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_from_dc) == -1 || close(file_to_dc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_dc);
		exit(100);
	}
	return (0);
}
