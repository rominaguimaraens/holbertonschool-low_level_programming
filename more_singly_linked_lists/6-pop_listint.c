#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: struct
 * Return: head node
 */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *aux;

	if (!*head)
		return (i);
	aux = *head;
	*head = (*head)->next;
	i = aux->n;
	free(aux);
	return (i);
}
