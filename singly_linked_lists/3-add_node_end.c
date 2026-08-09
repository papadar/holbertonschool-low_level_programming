#include "lists.h"

/**
 * add_node_end - add a node to the end of the list
 * @head: pointer to the first item of the list
 * @str: pointer to the string of text
 * Return: pointer to the new item
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int strlen = 0;
	list_t *prev = *head;
	list_t *temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);
	while (str[strlen] != '\0')
		strlen++;

	temp->str = strdup(str);
	temp->len = strlen;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		while (prev->next != NULL)
			prev = prev->next;
		prev->next = temp;
	}
	return (temp);
}
