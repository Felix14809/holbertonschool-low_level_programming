#include "lists.h"
/**
* add_node_end - adds a new node at the end of a linked list
* and assigns value to the elements in the new node
*@str: string passed
*@head: pointer to a struct pointer
*Return: pointer to node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int str_len;
	char *string;
	list_t *node, *original;

	original = *head;
	node = *head;
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
	node->next = NULL;
	if (original == NULL)
		*head = node;
	else
	{
		while (original->next != NULL)
		{
			original = original->next;
		}
		original->next = node;
		
	}
	return (node);
}
