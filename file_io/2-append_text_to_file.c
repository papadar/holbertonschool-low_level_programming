#include "main.h"

/**
 * append_text_to_file - append a string to a filename provided!
 * @filename: the provided filename
 * @text_content: pointer to a string
 * Return: 1 for success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int count, file, out;

	if (!filename)
		return (-1);
	count = file = out = 0;
	if (!text_content)
	{
		text_content = "";
		out = -1;
	}
	while (text_content[count] != '\0')
		count++;
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);
	if (out == -1)
		return (1);
	out = write(file, text_content, count);
	if (out == -1)
		return (-1);

	return (1);
}
