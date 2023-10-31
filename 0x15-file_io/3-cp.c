#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*error_handler - check errors in files
*file_from: file to copy from
*file_to: file to copy to
*/
void error_handler(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	error(99);
	}
}
/**
*main - copy content of a file from one the other
*@argc: argument count
*@argv: argument vector
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t nc, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(file_from, file_to, argv);

	nc = 1024;

	while (nc == 1024)
	{
		nc = read(file_from, buffer, 1024);
		if (nc == -1)
			error_handler(-1, 0, argv);
		wr = write(file_to, buffer, 1024);
			error_handler(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	{
		dprintf(STDERR_FILENO, "Error:can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
