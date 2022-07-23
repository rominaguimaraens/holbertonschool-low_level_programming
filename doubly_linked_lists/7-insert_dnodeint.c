#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: first node
 * @idx: index
 * @n: n
 * Return: new
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *help;
	unsigned int position;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0 || *h == NULL)
	{
		return (add_dnodeint(h, n));
	}
	help = *h;

	for (position = 0; position < (idx - 1); position++)
	{
		help = help->next;
		if (!help)
			return (NULL);
	}
	if (help->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new->next = help->next;
	new->prev = help;
	help->next = new;
	help = new->next;
	help->prev = new;
	return (new);
}
