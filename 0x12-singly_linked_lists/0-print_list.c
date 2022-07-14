#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t length = 0;
	while (h != NULL)
	{
		if(h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}

	return (length);
}