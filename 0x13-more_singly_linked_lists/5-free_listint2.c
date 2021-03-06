#include "lists.h"

/**
 * free_listint2 - frees a linked list, and sets head to NULL
 * @head: linked list
 */

void free_listint2(listint_t **head)
{

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		listint_t *tmp;

		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
