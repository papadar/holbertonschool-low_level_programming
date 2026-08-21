#include "main.h"

/**
 * read_textfile - open a text file and read the contents
 * @filename: the text file in question
 * @letters: number of letters to read and print to stdout
 * Return: the number of letters that were read and printed
 * or 0 if file is null / unable to write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, i, count;
	char *filestr;

	if (letters == 0 || filename == NULL)
		return (0);

	filestr = malloc(sizeof(*filestr) * letters);
	if (filestr == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(filestr);
		return (0);
	}
	i = read(file, filestr, letters);
	if (i == -1)
	{
		free(filestr);
		return (0);
	}
	count = write(STDOUT_FILENO, filestr, i);
	if (count != i)
	{
		free(filestr);
		return (0);
	}
	close(file);
	return (count);
}
