#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning 
 * @head: double pointer at the beginning
 * @n: value to add to new node
 *
 * Return: pointer to new node; NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
