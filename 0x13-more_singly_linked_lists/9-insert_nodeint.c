#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first node
 * @idx: index where the new node
 * @n: data
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *next_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (j = 0; next_node && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = next_node->next;
			next_node->next = new_node;
			return (new_node);
		}
		else
			next_node = next_node->next;
	}

	return (NULL);
}
