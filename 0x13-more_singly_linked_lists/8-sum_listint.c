#include "lists.h"
/**
 * sum_listint - returns sum of all the data inside the liked list
 * @head: head
 * Return: sum of all data or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
