#include "main.h"
#include <stdio.h>
/**
*times_tables - prints the times tables
*/
void times_table(void)
{
	int i, j, res;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			res = i + j;
			printf("%d, ", res);
		}
		printf("\n");
	}
	printf("\n");
}
