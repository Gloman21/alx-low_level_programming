#include "lists.h"

/**
*listint_len - counts the number of nodes in a linked list
*@h: head of list
*Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *route = h;
	size_t count = 0;

	while (route != NULL)
	{
		count += 1;
		route = route->next;
	}
	return (count);
}
