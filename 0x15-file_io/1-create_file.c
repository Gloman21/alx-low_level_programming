#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
*create_file - creates and writes into files
*@filename: file name to create
*@text_content: the content to be copied into the file
*Return: 1 if successful or -1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t written_bytes;
	ssize_t number_letters = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	for (number_letters = 0; text_content[number_letters]; number_letters++)
	{

	}

	written_bytes = write(file_descriptor, text_content, number_letters);

	if (written_bytes == -1)
		return (-1);
	close(file_descriptor);

	return (1);
}
