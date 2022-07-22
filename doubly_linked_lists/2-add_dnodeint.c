#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: head node
 * @n: n
 * Return: new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;

	h = malloc(sizeof(dlistint_t));

	if (!h)
	{
		return (NULL);
	}

	h->n = n;

	if (*head)
	{
		h->next = *head;
		(*head)->prev = h;
		*head = h;

		return (*head);
	}
	h->next = *head;
	h->prev = NULL;
	*head = h;

	return (*head);

}
