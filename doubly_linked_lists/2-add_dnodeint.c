#include "lists.h"

/**
 * add_dnodeint - adds a new element to the dub_list
 * @head: **pointer to the head item
 * @n: the integer to store
 * Return: pointer to the new item
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!temp)
		return (NULL);
	(*head)->prev = temp;
	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	*head = temp;
	return (*head);
}
