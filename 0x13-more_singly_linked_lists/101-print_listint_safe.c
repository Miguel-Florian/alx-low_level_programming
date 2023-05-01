#include "lists.h"
/**
 * free_listp - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numNodes = 0;
	listp_t *ptr, *newNode, *add;

	ptr = NULL;
	while (head != NULL)
	{
		newNode = malloc(sizeof(listp_t));

		if (newNode == NULL)
			exit(98);

		newNode->p = (void *)head;
		newNode->next = ptr;
		ptr = newNode;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (numNodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		numNodes++;
	}

	free_listp(&ptr);
	return (numNodes);
}
