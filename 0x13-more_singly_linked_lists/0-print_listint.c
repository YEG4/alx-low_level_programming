#include "lists.h"
/**
 * print_listint - print member of linked list.
 * @h: pointer to listint_t.
 *
 * Description: print member of linked list.
 * Return : number of nodes (count).
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
