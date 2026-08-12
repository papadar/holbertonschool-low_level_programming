#include "lists.h"

/**
 * free_dlistint - cycles through the list and freeze the memory
 * @head - pointer to the first item
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
	{
		temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
			free(temp->prev);
		}
		free(temp);
	}
	head = NULL;
	temp = NULL;
}
