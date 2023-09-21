#include "lists.h"

/**
 * add_node_end - adds a new node to the end of the list.
 * @str: pointer to a Node
 * @head: pointer to pointer to Node
 *
 * Description: adds a new node to the end of the list.
 * Return: the address of the new element , or (NULL) if it failed.
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *temp = *head;

	if (*head == NULL || new_node == NULL)
		return (NULL);
	if (temp == NULL)
	{
		new_node = add_node(head, str);
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node - adds a new node to the beginning of the list.
 * @str: pointer to a Node
 * @head: pointer to pointer to Node
 *
 * Description: adds a new node to the beginning of the list.
 * Return: the address of the new element , or (NULL) if it failed.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *temp = *head;

	if (new_node == NULL)
		return (NULL);
	*head = new_node;
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = temp;

	return (new_node);
}
