/**
*main - this is a function
*Return: always 0
*/
#include <stdio.h>
int main(void)
{
	char g = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(g);
		g++;
	}
	putchar('\n');
	return (0);
}
