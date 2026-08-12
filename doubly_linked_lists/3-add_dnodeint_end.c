#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a list
* @head: pointer to head
* @n: data to assign to node
* Return: number of elements
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	new->prev = temp;
	return (new);
}
