#include <unistd.h>

/**
*_putchar - writes character c to stdout
*@c: character to be printed
*Return: return on success 1 and on error return to -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
