#include "lists.h"
/**
 * listint_len - print member of linked list.
 * @h: pointer to listint_t.
 *
 * Description: print member of linked list.
 * Return: number of nodes (count).
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
