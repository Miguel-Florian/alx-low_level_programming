#include "lists.h"
/**
 * add_node - adds a new node at the head
 * @head: head of the linked list.
 * @str: string to add in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t len;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
