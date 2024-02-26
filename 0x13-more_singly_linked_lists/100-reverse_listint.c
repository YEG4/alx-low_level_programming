#include "lists.h"

/**
 * reverse_listint - reverses list
 * @head: pointer to the node
 *
 * Return: pointer to the node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *behind = NULL;
	listint_t *forward = NULL;

	while (*head)
	{
		forward = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = forward;
	}

	*head = behind;

	return (*head);
}
