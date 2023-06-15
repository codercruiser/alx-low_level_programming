#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the linked list
 *
 * Description: Frees the memory allocated for the linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *cursor = head;

    while (head)
    {
        head = head->next;
        free(cursor);
        cursor = head;
    }
}

