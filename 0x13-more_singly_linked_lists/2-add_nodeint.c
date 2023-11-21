#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning
 * @head: pointer to address of the head of listint_t
 * @n: integer for node
 *
 * Return: NULL if function fails otherwise address of new element
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
