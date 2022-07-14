#include "lists.h"
/**
 * list_len - number of elements in a listed link
 * @h: structure of linked list node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
