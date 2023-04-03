#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - return sum of list data
 * @head: head node
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (!head || !*head)
		return (*head);

	previous = 0;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
