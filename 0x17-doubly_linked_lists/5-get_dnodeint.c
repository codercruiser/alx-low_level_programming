#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Head pointer to the linked list
 * @index: Index of the node to retrieve
 *
 * Description: Returns the node at the specified index in the linked list
 *
 * Return: Pointer to the nth node, or NULL if the index is out of range
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    while (head && index != 0)
    {
        head = head->next;
        index--;
    }

    if (head && index == 0)
        return (head);

    return (NULL);
}

