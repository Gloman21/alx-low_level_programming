#include <stdio.h>
#include "lists.h"
/**
*sum_listint - calculat sum of all data of a linked list
*@head: pointer to head of list
*Return:returns sum of all data or 0
*/
int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
