#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Pointer to a pointer to the head of the linked list
 * @n: Data for each node
 *
 * Return: Address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;

    if (*head == NULL)
    {
        new_node->next = NULL;
        *head = new_node;
    }
    else
    {
        new_node->next = *head;
        if (*head)
            (*head)->prev = new_node;
        *head = new_node;
    }

    return new_node;
}

