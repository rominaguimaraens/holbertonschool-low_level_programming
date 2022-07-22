#include "lists.h"
/**
 * dlistint_len - returns number of elements in list
 * @h: list
 * Return: c
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
