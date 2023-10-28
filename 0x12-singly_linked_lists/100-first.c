#include "lists.h"
void GoesFast(void)__attribute__((constructor));
/**
*GoesFast - function that runs before the main function
*/

void GoesFast(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
