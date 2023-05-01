#include "lists.h"
/**
 * listint_len - returns the numbers of items inside the singly linked list
 * @h: head of list 
 * Return: number of nodes inside the list
 */

size_t listint_len(const listint_t *h)
{
	size_t NumNode = 0;
	
	while (h != NULL)
	{
		h = h->next;
		NumNode++;
	}
	return (NumNode);
}
