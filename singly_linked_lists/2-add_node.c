#include "lists.h"
/**
 * add_node - adds a new node at the beginning of the linked list
 * @head: pointer to linked list
 * @str: what to add
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
