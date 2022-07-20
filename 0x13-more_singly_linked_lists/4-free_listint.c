#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		if (head == NULL)
		{
			return;
		}
		else
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
	}

}
