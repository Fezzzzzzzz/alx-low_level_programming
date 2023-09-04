#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: the file name.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _read = 0, _write = 0;
	char *buff;
	int file = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);
	if (file == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	_read = read(file, buff, letters);
	if (_read == -1)
	{
		free(buff);
		close(file);
		return (0);
	}
	_write = write(1, buff, _read);
	if (_write == -1)
	{
		free(buff);
		close(file);
		return (0);
	}
	free(buff);
	close(file);
	return (_write);
}
