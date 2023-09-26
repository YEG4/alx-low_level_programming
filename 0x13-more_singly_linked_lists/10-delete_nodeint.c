#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer to the first node
 * @index: index of the node 
 *
 * Return: -1 FAIL , 1 SUCCESS
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node = *head;
	listint_t *node;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(next_node);
		return (1);
	}

	while (index - 1 > j)
	{
		if (!(next_node->next) || !next_node)
			return (-1);
		next_node = next_node->next;
		j++;
	}


	node = next_node->next;
	next_node->next = node->next;
	free(node);

	return (1);
}