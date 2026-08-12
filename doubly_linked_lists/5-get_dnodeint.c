#include "lists.h"

/**
 * get_dnodeint_at_index - get a pointer to the nth node
 * @head: the hea dof the dub_list
 * @index: the item #no we want
 * Return: *ptr to the nth item
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index)
	{
		if (head->next != NULL)
			head = head->next;
		else
			return (NULL);
		i++;
	}
	return (head);
}
