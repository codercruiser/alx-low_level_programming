#include <stdlib.h>
#include "lists.h"
/**
<<<<<<< HEAD
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
=======
 * free_listint - frees a list
 * @head: head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
>>>>>>> 4e35a41b08c520227166df17a7406017ee448cba
}

