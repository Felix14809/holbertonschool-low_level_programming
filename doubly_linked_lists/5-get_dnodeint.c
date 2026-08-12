#include "lists.h"
/**
* get_dnodeint_at_index - returns the pointer to node at index
* @head: pointer to head
* @index: index to look for
* Return: pointer to node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;

	temp = head;
	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
