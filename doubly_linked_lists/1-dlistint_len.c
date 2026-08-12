#include "lists.h"

/**
 * dlistint_len - return the length of a dub_list
 * @h: pointer to the head
 * Return: size_t of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t T = 0;

	while (h)
	{
		h = h->next;
		T++;
	}
	return (T);
}
