#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to the head of the linked list.
 * @idx: the index at which the node is going to be added.
 * @n: teh value of teh inserted node.
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *tmp = *h, *new;

    if (idx == 0)
        return (add_dnodeint(h, n));

    for (; idx != 1; idx--)
    {
        tmp = tmp->next;
        if (tmp == NULL)
            return (NULL);
    }

    if (tmp->next == NULL)
        return (add_dnodeint_end(h, n));

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return NULL;
    new->n = n;
    new->next = temp->next;
    new->prev = temp;
    if (temp->next)
        temp->next->prev = new;
    temp->next = new;

    return new;
}
