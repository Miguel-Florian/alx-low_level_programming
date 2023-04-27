#include "lists.h"
/**
 * printt_list - prints all the elements of a list_t
 * @h: singly linked list.
 * Return: number of elements in this list
 */
size_t print_list(const list_t *h)
{
	size_t cpt = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");

		h = h->next;
		cpt++;
	}
	return (cpt);
}
