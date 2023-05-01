#include "lists.h"
/**
 * print_listint - prints all the elements f a linked list
 * @h: head of linked list
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t NumNode = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		NumNode++;
	}
	return (NumNode);
}
