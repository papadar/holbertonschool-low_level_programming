#include "lists.h"

/**
 * free_list - cycles through a linked list to free it all
 * @head: pointer to the first item of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head->str);
	free(head);
}
