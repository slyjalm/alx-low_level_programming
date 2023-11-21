#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of a listint_t
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
}
