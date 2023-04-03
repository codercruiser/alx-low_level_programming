#include "lists.h"

/**
 * add_nodeint - function with two arguments
 * @head: double pointer to linked list
 * @n: value data of new node
 *
 * Description: adds a new node at the beginning of linked list
 * Return: address of new element or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
