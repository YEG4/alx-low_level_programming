#include "lists.h"
/**
 * free_listint2 - print member of linked list.
 * @head: pointer to listint_t.
 *
 *
 * Description: print member of linked list.
 * Return: address of new node.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
