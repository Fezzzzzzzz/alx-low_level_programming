#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename:is the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return:1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _write, i = 0, file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	if (file == -1)
		return (-1);
	while (text_content[i])
		i++;
	_write = write(file, text_content, i);
	if (_write == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
