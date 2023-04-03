#include "lists.h"

/**
 * add_nodeint_end - function with two arguments
 * @head: double pointer to head of first linked list
 * @n: integer value of data in node
 *
 * Description: add a new node at the end of linked list
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *element, *cursor;

	element = malloc(sizeof(listint_t));
	if (element == NULL)
		return (NULL);

	element->next = NULL;
	element->n = n;

	if (*head)
	{
		cursor = *head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = element;
	}
	else
		*head = element;
	return (element);
}
