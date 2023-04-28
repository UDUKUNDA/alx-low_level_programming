#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees the list
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *cNode;

	while (head != NULL)
	{
		cNode = head;
		head = head->next;
		free(cNode);
	}
}
