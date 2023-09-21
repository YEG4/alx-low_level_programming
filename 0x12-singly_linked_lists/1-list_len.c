#include "lists.h"

/**
 * list_len - prints number of lists
 * @h: pointer to a Node
 *
 * Description: prints number of lists
 * Return: number of nodes.
 */


size_t list_len(const list_t *h)
{
	list_t const *next = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (next != NULL)
	{
		count++;
		next = next->next;
	}
	return (count);
}
