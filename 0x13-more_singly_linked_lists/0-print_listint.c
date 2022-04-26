#include "lists.h"

/*
 * print_listint - prints all the elements of a linked list.
 * @h: linked list of type listint_t to print
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
