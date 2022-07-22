#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *help;

	while (head)
	{
		help = head->next;
		free(head);
		head = help;
	}
}
