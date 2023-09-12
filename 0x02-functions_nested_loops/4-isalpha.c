#include "main.h"
/**
*_isalpha - check alphabets
*@c: function parameter
*Return: returns to 1 and 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
