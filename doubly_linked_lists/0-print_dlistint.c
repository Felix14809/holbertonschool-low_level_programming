#include "lists.h"
/**
 *print_dlistint - prints all elements of a list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t elements = 0;

	if (current == NULL)
		return (elements);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		elements++;
	}
	return (elements);
}
