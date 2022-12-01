#include "lists.h"

/**
 * pop_listint - a function that deletes head nodes
 * @head: head nodes
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int num;

	if(!*head)
		return (0);

	num = (*head)->n;
	*head = new->next;
	free(new);
	return (num);
}

