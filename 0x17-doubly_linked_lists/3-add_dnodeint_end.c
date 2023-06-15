#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Double pointer to the first node in the doubly linked list
 * @n: Value of the new node
 *
 * Description: Adds a new node with the given value at the end of the list
 *
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = NULL, *temp = NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp && temp->next)
            temp = temp->next;

        temp->next = new_node;
        new_node->prev = temp;
    }

    return (new_node);
}

