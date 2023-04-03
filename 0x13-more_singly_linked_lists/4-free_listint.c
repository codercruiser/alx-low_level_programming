#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free all malloced spaced of a list
 * @head: Pointer to the start of the list
 */
void free_listint(listint_t *head)
{
        if (head != NULL)
        {
                if (head->next != NULL)
                        free_listint(head->next);
                free(head);
        }
}

