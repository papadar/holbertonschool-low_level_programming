#include "lists.h"

/**
 * insert_dnodeint_at_index - places a new node at n depth
 * @h: **head
 * @idx: index to insert at
 * @n: th eint to store
 * Return: Pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *prev = NULL;
	dlistint_t *head = *h;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!head || !temp)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	while (head->next != NULL && pos < idx)
	{
		prev = head;
		head = head->next;
		pos++;
	}
	if (prev)
	{
		prev->next = temp;
		temp->prev = prev;
	}
	if (head)
	{
		head->prev = temp;
		temp->next = head;
	}
	return (temp);
}
