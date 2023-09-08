#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - main is the function
*Return: return is always 0
*/
int main(void)
{
	int n, B;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	B = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, B);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, B);
	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, B);
	return (0);
}
