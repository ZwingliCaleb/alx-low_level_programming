#include "lists.h"

/**
 * free_listint2 - functio that frees a list head = NULL
 *
 * @head: pointer
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	if (!head)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
