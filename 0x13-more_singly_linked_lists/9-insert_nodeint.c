#include "lists.h"

/**
 * insert_nodeint_at_index - function with 3 arguments
 * @head: pointer to head pointer of first node in linked list
 * @idx: index of list
 * @n: value integer
 *
 * Description: inserts a new node at a given position
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *cursor;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	cursor = *head;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}

	while (cursor != NULL)
	{
		if (count == idx - 1)
		{
			node->next = cursor->next;
			cursor->next = node;
		}
		count++;
		cursor = cursor->next;
	}
	if (idx > count)
		return (NULL);
	return (node);

}
