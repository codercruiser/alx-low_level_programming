#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index in a doubly linked list
 * @head: Double pointer to the head of the doubly linked list
 * @idx: Index position to insert the new node
 * @n: Value of the new node
 *
 * Description: Inserts a new node with the specified value at the given index position
 *
 * Return: Address of the new node if successful, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
    dlistint_t *new_node, *current_node;

    if (head == NULL)
        return NULL;

    if (idx == 0)
        return add_dnodeint(head, n);

    current_node = *head;
    while (idx > 1 && current_node && current_node->next)
    {
        current_node = current_node->next;
        idx--;
    }

    if (idx > 1 || current_node == NULL)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->prev = current_node;
    new_node->next = current_node->next;

    if (current_node->next != NULL)
        current_node->next->prev = new_node;

    current_node->next = new_node;

    return new_node;
}

