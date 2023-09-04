#include "main.h"
/**
 * create_file -  function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int _write, i = 0;
	int file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);
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
