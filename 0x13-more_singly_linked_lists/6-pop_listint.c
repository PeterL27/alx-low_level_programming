#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the head of linked list
 *
 * Return: 0 if linked list if empty
 * or head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (n);
}
