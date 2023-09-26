#include "lists.h"
/**
 * add_nodeint - print member of linked list.
 * @h: pointer to listint_t.
 * @n: elemnt of the node.
 * 
 * Description: print member of linked list.
 * Return: address of new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t*)(sizeof(listint_t));
	
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
