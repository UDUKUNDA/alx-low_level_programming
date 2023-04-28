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
	if (head != NULL)
	{
	list_t *cNode = head;
	list_t *trav;

	while (cNode != NULL)
	{
		trav = cNode->next;
		free(cNode->str);
		free(cNode);
		cNode = trav;
	}
	}
}
