#include "lists.h"

/**
 * add_node - add a node to the list, and tidy up pointers
 * @head: pointer to the first item of the list
 * @str: pointer to the string of text
 * Return: pointer to the new item
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int strlen = 0;
	list_t *temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	while (str[strlen] != '\0')
		strlen++;

	temp->str = strdup(str);
	temp->len = strlen;
	temp->next = *head;
	*head = temp;
	return (temp);
}
