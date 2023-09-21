#include "lists.h"

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
