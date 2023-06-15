#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a doubly linked list
 * @head: Head pointer to the doubly linked list
 *
 * Description: Returns the sum of the values of all nodes in the list
 *
 * Return: 0 if the list is empty, or the sum of the data values
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *cursor = head;

    while (cursor)
    {
        sum += cursor->n;
        cursor = cursor->next;
    }

    return sum;
}

