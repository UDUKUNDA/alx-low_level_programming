#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints the function
 * @head: the pointer to the head of the list
 *
 * Return: a value
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *front;
	const listint_t *behind;

	front = head;
	behind = head;

	while (front != NULL && front->next != NULL)
	{
		printf("[%p] %d\n", (void *)behind, behind->n);
		i++;
		behind = behind->next;
		front = front->next->next;
		if (front == behind)
		{
			printf("[%p] %d\n", (void *)behind, behind->n);
			i++;
			printf("-> [%p] %d\n", (void *)front->next, front->next->next->n);
			i++;
			break;
		}
	}
	if (front == NULL || front->next == NULL)
	{
		while (behind != NULL)
		{
			printf("[%p] %d\n", (void *)behind, behind->n);
			i++;
			behind = behind->next;
		}
	}
	if (i == 0)
	{
		exit(98);
	}
	return (i);
}
