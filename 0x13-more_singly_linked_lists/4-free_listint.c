#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the pointer to the struct
 *
 * Return: number of elements
 */

void free_listint(listint_t *head)
{
	listint_t *freeing;

	while (head != NULL)
	{
		fr = head;
		head = freeing->next;
		free(freeing);
	}
}
