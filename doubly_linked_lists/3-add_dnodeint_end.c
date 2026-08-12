#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of the dub_list
 * @head: **pointer to the head
 * @n: integer to store
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *thed = *head;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (thed)
	{
		while (thed->next != NULL)
			thed = thed->next;
		temp->prev = thed;
		thed->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
