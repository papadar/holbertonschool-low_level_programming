#include "lists.h"

/**
 * print_list - prints a value from the list struct
 * @h: pointer to the first item of the list
 * Return: the size of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		size++;
		h = h->next;
	}

	return (size);
}
