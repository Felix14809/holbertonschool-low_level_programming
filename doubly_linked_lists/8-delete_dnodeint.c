#include "lists.h"
/**
*delete_dnodeint_at_index - deletes  a node at a specified index
*@head: pointer to head
*@index: index to delete at
*
*Return: success or fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	while (temp != NULL && idx < index)
	{
		idx++;
		temp = temp->next;
	}
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
		{
			free(*head);
			*head = NULL;
			return (1);
		}
	}
	else if (temp == NULL)
		return (-1);
	if (temp->next == NULL)
		temp->prev->next = NULL;
	else
	{
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
	}
	free(temp);
	return (1);
}
