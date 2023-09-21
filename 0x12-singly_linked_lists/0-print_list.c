#include "lists.h"

/**
 * print_list - prints members of linked list
 * @h: pointer to a Node
 * 
 * Return: number of nodes.
 */


size_t print_list(const list_t *h)
{
	list_t *next = h;
	int count = 0;

	if (h == NULL)
		return;
	while (next != NULL)
	{	
		count++;
		if (next->str != NULL)
		{
			printf("[%d] %s\n", next->len, next->str);
			next = next->next;
		}
		else
		{
			printf("[0] (nil)\n", next->len, next->str);
			next = next->next;
		}
	}
}