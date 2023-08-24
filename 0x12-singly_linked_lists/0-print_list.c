#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 * @h: pointer to the head of node.
 *
 * Return: number of elements in list.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[%i] ", h->len);
			printf("%s\n", h->str);
		}
		count++;
		h = h->next;
	}
	return (count);

