#include "lists.h"

/**
 * print_dlistint - prints all the elemets of a dlistint_t list.
 * @h: pointer to the head of list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
