#include "lists.h"

/**
 * list_len - cycles through a linked list to find the total size
 * @h: pointer to the first item of the list
 * Return: the size of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
