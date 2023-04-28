#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a node
 * @head:  a head pointer
 * @str: a string data
 * Return: a value
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
