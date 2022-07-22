#include "lists.h"
/**
 * print_dlistint - function that prints all elements of list
 * @h: list
 * Return: c
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
