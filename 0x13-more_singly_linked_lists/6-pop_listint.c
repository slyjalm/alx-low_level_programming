#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to first element in linked list
 *
 * Return: the data inside the elements that was delete
 * otherwise 0
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
		int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
