#include "lists.h"
/**
*get_nodeint_at_index - finds given nnode in a linked list
*@head: pointer to head of linked list
*@index: index of a node to be found
*Return: returns pointer to desired node or NULL(if the node does not exist)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t d;

	for (d = 0; d < index && head->next; d++)
	head = head->next;

	if (d < index)
	return (NULL);

	return (head);
}
