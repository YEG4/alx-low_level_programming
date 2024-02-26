#include "lists.h"

/**
 * sum_listint - calculates the addition
 * @head: first node
 *
 * Return: addition
 */
int sum_listint(listint_t *head)
{
	int addition = 0;
	listint_t *next_node = head;

	while (next_node)
	{
		addition += next_node->n;
		next_node = next_node->next;
	}

	return (addition);
}
