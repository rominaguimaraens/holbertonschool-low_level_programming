#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
	list_t *freedom;

	while ((freedom = head))
	{
		if (freedom->str)
		{
			free(freedom->str);
		}
		head = head->next;
		free(freedom);
	}
}
