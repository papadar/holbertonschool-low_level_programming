#include "main.h"

/**
 * create_file - accepts a string and saves it to a filename provided!
 * @filename: the provided filename
 * @text_content: pointer to a string
 * Return: 1 if made the file, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int count, file, out;

	if (!filename)
		return (-1);
	count = file = out = 0;
	while (text_content[count] != '\0')
		count++;

	if (count == 0)
		text_content = "";

	file = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (file == -1)
		return (-1);
	out = write(file, text_content, count);
	if (out == -1)
		return (-1);

	return (1);
}
