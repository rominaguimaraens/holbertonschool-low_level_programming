#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to head
 * @str: string
 * Return: new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *check = *head;

	newNode = malloc(sizeof(list_t));

	if (newNode)
	{
		if (*head == NULL)
		{
			*head = newNode;
		}
		else
		{
		while (check->next != NULL)
		{
			check = check->next;
		}
		check->next = newNode;
		}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;
	}
	else
	{
		free(newNode);
	}
	return (newNode);
}
