#include "lists.h"
/**
*insert_nodeint_at_index - adds a new node to a linked list
*@head: pointer to head of the list
*idx: index at which to insert the new node should be added. index starts at 0
*@n: value of the new node
*Return: pointer to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (tmp == NULL || tmp->next == NULL)
		return (NULL);
		tmp = tmp->next;
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
