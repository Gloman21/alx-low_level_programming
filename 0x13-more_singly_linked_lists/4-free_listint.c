#include "lists.h"

/**
*free_listint - frees a linked list
*@head: head of list
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *c;

	while (head != NULL)
	{
		c = head;
		head = head->next;
		free(c);
	}
}
