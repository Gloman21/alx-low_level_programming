#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, countbit = 0;
	unsigned long int previous;
	unsigned long int new = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		previous = new >> b;
		if (previous & 1)
			countbit++;
	}

	return (countbit);
}
