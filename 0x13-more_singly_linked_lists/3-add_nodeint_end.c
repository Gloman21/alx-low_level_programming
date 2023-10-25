#include "lists.h"

/**
*add_nodeint_end - adds new node
*@head: points to the new_node
*@n: value of a new node
*Return: returns a new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);


	if (*head == NULL)
	{
		*head = new_node;
	}
	else if (*head != NULL)
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;

	}
	new_node->n = n;
	return (new_node);
}
