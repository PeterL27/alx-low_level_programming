#include "list.h"

/**
 * free_listint - function that frees linked list
 * @head: head of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
