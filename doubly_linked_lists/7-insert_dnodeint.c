#include "lists.h"
/**
*insert_dnodeint_at_index - adds a node at a specified index
*@h: pointer to head
*@idx: index to insert at
*@n: data
*Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int index = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (temp != NULL && index < idx)
	{
		temp = temp->next;
		index++;
	}
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		new->prev = NULL;
		*h = new;
	}
	else if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->prev = temp;
		new->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new;
		temp->next = new;
	}
	return (new);
}
