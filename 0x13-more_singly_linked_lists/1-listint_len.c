#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *listint_len - returns the number of elements in a linked list
 *@h:pointer to a listint struct
 *Return:number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
