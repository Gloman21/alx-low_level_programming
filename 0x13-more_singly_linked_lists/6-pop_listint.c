#include "lists.h"

/**
*pop_listint - deletes head node
*@head: pointer to the head of linked list
*Return: returns to  the head node data(n) or 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *b;
	int n;

	b = *head;
	if (b == NULL)
	return (0);

	*head = b->next;
	n = b->n;
	free(b);
	return (n);
}
