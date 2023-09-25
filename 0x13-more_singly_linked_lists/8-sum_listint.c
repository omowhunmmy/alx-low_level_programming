#include "lists.h"

/**
 * sum_listint - to calculate the sum of all the data in the listint_t list
 * @head: the first node in a linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
