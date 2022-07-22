#include "lists.h"
/**
 * add_dnodeint_end - adds node at end of list
 * @head: head node
 * @n: n
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *help;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		help = *head;
		while (help->next)
		{
			help = help->next;
		}
		help->next = new;
		new->prev = help;
		return (new);
	}
	new->prev = NULL;
	*head = new;
	return (new);
}
