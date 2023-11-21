#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - calculates sum of all data of a listint_t list
 * @head: first node in the linked list
 *
 * Return: sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
