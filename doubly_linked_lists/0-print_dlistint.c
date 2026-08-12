#include "lists.h"

/**
 * print_dlistint - prints each element of a doubly linked list
 * @h: the struct list head pointer
 * Return: the size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int N = 0;
	size_t T = 0;

	while (h)
	{
		N = h->n;
		printf("%d\n", N);
		h = h->next;
		T++;
	}

	return (T);
}
