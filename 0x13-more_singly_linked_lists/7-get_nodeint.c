#include "lists.h"

/**
 * get_nodeint_at_index - returns the node
 * @head: first node
 * @index: index of the node
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *next_node = head;

	while (next_node && j < index)
	{
		next_node = next_node->next;
		j++;
	}

	return (next_node ? next_node : NULL);
}
