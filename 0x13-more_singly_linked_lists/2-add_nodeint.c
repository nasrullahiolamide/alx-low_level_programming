#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new_node = malloc(sizeof(listint_t));

        new_node->n = n;
        new_node->next = *head;
        *head = new_node;

        return (*head);
}