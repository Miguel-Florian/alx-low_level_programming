#include "lists.h"
/**
 * revese_listint - reverses a linked list
 * @head: head
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *n;

	ptr = n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = n;
	}
	*head = ptr;
	return (*head);
}
