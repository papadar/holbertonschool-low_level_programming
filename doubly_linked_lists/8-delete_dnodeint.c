#include "lists.h"

/**
 * delete_dnodeint_at_index - delete index if exists & tidy up pointers
 * @head: **pointer to the head
 * @index: the struct to delete
 * Return: 1 if success, -1 on failure;
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *myhead = *head;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		(*head = (*head)->next);
		if ((*head) != NULL)
			((*head)->prev = NULL);
		free(myhead);
		return (1);
	}

	while (pos < index)
	{
		if (myhead->next == NULL)
			return (-1);
		myhead = myhead->next;
		pos++;
	}

	myhead->prev->next = myhead->next;
	if (myhead->next != NULL)
		myhead->next->prev = myhead->prev;
	free(myhead);

	return (1);
}
