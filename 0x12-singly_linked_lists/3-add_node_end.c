#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a node at the end of the list
 * @head: a pointer to the head of the list
 * @str: string to be passed
 * Return: a value
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Nnode;
	list_t *temp;
	char *dup;

	Nnode = malloc(sizeof(list_t));
	if (Nnode == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(Nnode);
		return (NULL);
	}
	Nnode->str = dup;
	Nnode->next = NULL;
	Nnode->len = strlen(str);
	if (*head == NULL)
	{
		*head = Nnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = Nnode;
	}
	return (Nnode);
}
