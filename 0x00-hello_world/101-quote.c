/**
*main - main function
*Return: always 1
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	int stlength;
	char *words = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	stlength = strlen(words);
	write(1, words, stlength);
	return (1);
}
