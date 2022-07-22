#include "lists.h"
/**
 * sum_dlistint - sums all data of a list
 * @head: list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
