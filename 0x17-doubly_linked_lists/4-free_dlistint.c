#include "lists.h"

/**
 * free_dlistint - function to free dlistint_t list
 * @head: pointer to head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_ptr;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}

	while ((head_ptr = head) != NULL)
	{
		head = head->next;
		free(head_ptr);
	}
}
