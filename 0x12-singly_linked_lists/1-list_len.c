#include "lists.h"

/**
 * list_len - Finds the number of elements.
 * @h: The linked list_t list.
 * @elements: counter size_t (nodes)
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
