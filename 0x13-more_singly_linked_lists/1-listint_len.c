#include "lists.h"

/**
 * listint_len -shows number of elemnets in transverse
 * @h: listing
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
