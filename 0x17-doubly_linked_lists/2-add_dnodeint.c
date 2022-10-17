#include "lists.h"

/**
 * add_dnodeint - Adds new node at the beginnig of the list
 *
 * @*head: pointer to the first node
 * @n: Value to be inputed
 * Return: Pointer to the new node.
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *fmr = *(head);

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (NULL);
    }
    *head = new;
    new->n = n;
    new->prev = NULL;
    if (fmr == NULL)
    {
        new->next = NULL;
    }
    else{
        new->next = fmr;
        fmr->prev = *(head);
        fmr = NULL;

    }

    return(new);

}