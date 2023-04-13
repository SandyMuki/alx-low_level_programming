#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: count
 * @argv: points to
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_to_dc, file_from_dc, r;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_to_dc = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	file_from_dc = open(argv[1], O_RDONLY);

	if (file_from_dc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = read(file_from_dc, buf, 1024);

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while (r > 0)
	{
		if (file_to_dc == -1 || write(file_to_dc, buf, r) == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
			close(file_from_dc);
			exit(99);
		}
	}
	if (close(file_from_dc) == -1 || close(file_to_dc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_dc);
		exit(100);
	}
	return (0);
}
