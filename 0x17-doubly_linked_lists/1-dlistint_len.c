#include "lists.h"

/**
 * dlistint_len - Return number of elements of a dlistint_t list.
 *
 * @h: pointer to the first node
 * Return: Number of nodes.
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}

	return (count);
}
