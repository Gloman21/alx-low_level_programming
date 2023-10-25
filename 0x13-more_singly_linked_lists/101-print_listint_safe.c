#include "lists.h"

/**
*free_listp - frees a linked list
*@head:head of the list
*Return:none
*/
void free_listp(listp_t **head)
{
	listp_t *e;
	listp_t *d;

	if (head != NULL)
	{
		d = *head;
		while (e = d != NULL)
		{
			d = d->next;
			free(e);
		}
		*head = NULL
	}
}
/**
*print_listint_safe - prints a linked list
*@head: head of the list
*Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t f = 0;
	listp_t *g, *h, *i; /**h stands for a new node
				*/
	g = NULL;
	while (head != NULL)
	{
		h = malloc(sizeof(listp_t));
		if (h == NULL)
			exit(98);
		h->p = (void *head);
		h->next = g;

		g = h;
		i = g;
		while (add->next != NULL)
		{
			i = i->next;
			if (head == i->p)
			{
				
