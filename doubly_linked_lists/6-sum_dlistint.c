#include "lists.h"

/**
 * sum_dlistint - sum each value
 * @head: pointer to first item
 * Return: that sum
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head->next != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
