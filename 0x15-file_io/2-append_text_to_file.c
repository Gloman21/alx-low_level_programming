#include "main.h"
/**
*append_text_to_file - add text to an already existing file
*@filename: name of file to append content to
*@text_content: content to be appended to the file
*Return: 1 on success or -1 on failure
*file_descriptor: fd
*number_of_letters:nl
*write_return:rwr
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nl;
	int rwr;

	if (!filename)
		return (-1);

	fd =  open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)

		rwr = write(fd, text_content, nl);

	if (rwr == -1)
		return (-1);
	}

	close(fd);

	return (1);
}
