#include "lists.h"

/**
 * pop_listint - function with one argument
 * @head: pointer to head pointer of list
 *
 * Description: deletes the head node of linked list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *node;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);

	return (data);
}
