#include "lists.h"
/**
 * add_nodeint_end - print member of linked list.
 * @head: pointer to listint_t.
 * @n: elemnt of the node.
 *
 * Description: print member of linked list.
 * Return: address of new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node = malloc(sizeof(listint_t));

	temp = *head;
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		add_nodeint(head, n);
	while (temp->next != NULL)
	{	
		temp = temp->next;
	}
	new_node->next = NULL;
	new_node->n = n;
	temp->next = new_node;
	return (new_node);
}


/**
 * add_nodeint - print member of linked list.
 * @head: pointer to listint_t.
 * @n: elemnt of the node.
 *
 * Description: print member of linked list.
 * Return: address of new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}