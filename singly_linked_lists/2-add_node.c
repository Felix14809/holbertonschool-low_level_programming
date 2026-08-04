#include "lists.h"
/**
* add_node - adds a new node in a linked list
* and assigns value to the elements in the new node
*@str: string passed
*@head: pointer to a struct pointer
*Return: pointer to node
*/
list_t *add_node(list_t **head, const char *str)
{
	int str_len;
	char *string;
	list_t *node;

	str_len = 0;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	while (str[str_len])
	{
		str_len++;
	}
	string = strdup(str);
	if (string == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = string;
	node->len = str_len;
	node->next = *head;
	*head = node;
	return (node);
}
