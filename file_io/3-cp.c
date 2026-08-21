#include "main.h"

/**
 * main - program to copy a file
 * @argc: argument count
 * @argv: all the args - expecting 3
 * Return: 1 on success, various error codes otherwise
 */

int main(int argc, char *argv[])
{
	char *buffer;
	int bytes, file1, file2, size = 1024;

	if (argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	file2 = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	buffer = malloc(size * sizeof(*buffer));
	while ((bytes = read(file1, buffer, size)) > 0)
	{
		write(file2, buffer, bytes);
	}
	if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		free(buffer);
		return (100);
	}
	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		free(buffer);
		return (100);
	}
	free(buffer);
	return (1);
}
