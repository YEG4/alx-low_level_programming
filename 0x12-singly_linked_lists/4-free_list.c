#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to pointer to Node
 *
 * Description: frees a list_t list.
 */


void free_list(list_t *head)
{
	
	free(head);
		
}
