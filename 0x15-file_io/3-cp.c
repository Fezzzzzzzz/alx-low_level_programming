#include "main.h"
/**
 * main - program that copies the content of a file to another file.
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 on success, 97:100 on failure
 */
int main(int argc, char *argv[])
{
	int file_to, file_from, _read, _write;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0004);
	file_from = open(argv[1], O_RDWR);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((_read = read(file_from, buff, 1024)) > 0)
	{
		_write = write(file_to, buff, _read);
		if (_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		return (100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		return (100);
	}
	return (0);
}
