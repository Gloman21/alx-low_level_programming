#include "main.h"
/**
*read_textfile - reads text file
*@filename: it is the file name
*@letters: number of letters to read and print
*Return: returns the actual number of letters it could read and print
		*if the file can't be read return 0
			*if filename is NULL return 0
				*if write fails or doesn't write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ff;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	ff = open(filename, O_RDWR);
	if (ff == -1)
	{
		free(buffer);
		return (0);
	}

	wr = read(ff, buffer, letters);
	if (wr == -1)
	{
		free(buffer);
		close(ff);
		return (0);
	}

	rd = write(STDOUT_FILENO, buffer, wr);
	if (rd == -1)
	{
		free(buffer);
		close(ff);
		return (0);
	}

	free(buffer);
	if (close(ff) == -1)
		return (0);

	return (rd);
}
