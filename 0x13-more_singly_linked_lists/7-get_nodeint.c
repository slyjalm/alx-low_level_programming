#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node in the linked list
 * @index: index of node to return
 *
 * Return: pointer to the node otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
			i++;
	}

	return (tmp ? tmp : NULL);
}

