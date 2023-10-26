#include "main.h"

/**
 * _pow - func calculates the base ^ power
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of the base ^ power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int b;

	num = 1;
	for (b = 1; b <= power; b++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char blank;

	blank = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			blank = 1;
			_putchar('1');
		}
		else if (blank == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
