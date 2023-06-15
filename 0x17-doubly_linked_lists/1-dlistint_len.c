#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Total number of elements
 */
size_t dlistint_len(const dlistint_t *head)
{
    size_t count = 0;
    const dlistint_t *current = head;

    while (current)
    {
        current = current->next;
        count++;
    }

    return count;
}

