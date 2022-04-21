#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - function that frees a list_t list.
 * @head: list_t list to be freed
 *
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
