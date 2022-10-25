#include "lists.h"

/**
 * sum_listint - calculates sum of all the data (n) of a linked list
 * @head: pointer to head of list
 *
 * Return: sum of all the data
 * or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
