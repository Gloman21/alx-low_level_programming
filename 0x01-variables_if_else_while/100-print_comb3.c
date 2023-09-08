#include <stdio.h>
/**
*main - main function
*Description: prints numbers in unique style
*Return: always 0
*/
int main(void)
{
	int first, second;

	for (second = first + 1; second < 10; second++)
	{
		putchar((char)(first + 48));
		putchar((char)(second + 48));
		if (!(first == 8 && second == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}

putchar('\n');
return (0);
}
