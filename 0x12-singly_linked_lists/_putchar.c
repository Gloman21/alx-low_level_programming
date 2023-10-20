#include <unistd.h>

/**
* _putchar - writes character c to stdout
* @c: character to be printed
*Return: on success 1
*on error, -1 is returned
*/
int _putchar(char c)
{
	return (write (1, &c, 1));
}
