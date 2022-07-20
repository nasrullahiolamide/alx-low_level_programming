#include "lists.h"

/**
 * free_listint2 - frees a linked list, and sets head to NULL
 * @head: linked list
 */

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *tmp;

		if (*head == NULL)
		{
			return;
		}
		else
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
	}
	*head = NULL;
}
