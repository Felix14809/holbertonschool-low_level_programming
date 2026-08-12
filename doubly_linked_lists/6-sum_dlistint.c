#include "lists.h"
/**
* sum_dlistint - sums up data in all lists
* @head: pointer to head
*
* Return: sum of data in lists
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
