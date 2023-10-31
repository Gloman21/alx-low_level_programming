#include "main.h"
/**
*create_file - creates and writes into files
*@filename: file name to create
@text_content: the content to be copied into the file
*Return: 1 if successful or -1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int number_letters;
	int write_return;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
		text_content = " ";
	for (number_letters = 0; text_content[number_letters]; number_letters++)

	write_return = write(file_descriptor, text_content, number_letters);

	if (write_return == -1)
		return (-1);
	close(file_descriptor);

	return (1);
}
