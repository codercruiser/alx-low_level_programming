#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index in a doubly linked list
 * @head: Pointer to a double pointer to the head of the doubly linked list
 * @index: Index position to delete the node
 *
 * Description: Deletes the node at the specified index position in the doubly linked list
 *
 * Return: 1 if deletion succeeded, or -1 if deletion failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (!head)
		return (-1);

	if (*head)
	{
		while (index && current)
		{
			current = current->next;
			index--;
		}

		if (index)
			return (-1);

		if (!index && current)
		{
			if (current->next)
				current->next->prev = current->prev;

			if (current->prev)
				current->prev->next = current->next;
			else
				*head = current->next;

			free(current);
			return (1);
		}
	}

	return (-1);
}

