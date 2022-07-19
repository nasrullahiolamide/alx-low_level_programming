#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}


/**
 * Another logic - how to write again
 *  if (h->n)
*              {
*                      len++;
*                      printf("%d\n", h->n);
 *               }
 *               h = h->next;
 *
 */
