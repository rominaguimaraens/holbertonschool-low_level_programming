#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: first node
 * @index: index
 * Return: 1 (success) -1 (faliure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *delete, *before, *after;
	unsigned int i = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		(*head)->prev = NULL;
		return (1);
	}
	delete = *head;
	while (delete->next && i != index)
	{
		i++;
		delete = delete->next;
	}
	if (i == index)
	{
		before = delete->prev;
		if (!delete->next)
			before->next = NULL;
		else
		{
			after = delete->next;
			before->next = after;
			after->prev = before;
		}
		free(delete);
		return (1);
	}
	else
		return (-1);
}
