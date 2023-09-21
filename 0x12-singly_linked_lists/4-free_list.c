#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to pointer to Node
 *
 * Description: frees a list_t list.
 */


void free_list(list_t *head)
{
	list_t *temp = head, *next;

	if (head == NULL)
		return;

	while (temp)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
