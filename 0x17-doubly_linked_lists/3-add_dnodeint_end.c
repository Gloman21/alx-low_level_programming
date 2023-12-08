#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *first_node;

	first_node = malloc(sizeof(dlistint_t));
	if (first_node == NULL)
		return (NULL);
	first_node->n = n;
	first_node->next = NULL;
	if (*head == NULL)
	{
		first_node->prev = NULL;
		*head = first_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = first_node;
		first_node->prev = last_node;
	}
	return (first_node);
}
