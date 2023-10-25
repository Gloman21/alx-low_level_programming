#include "lists.h"

/**
*free_listint2 - free the linked list
*@head: points to the list
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
