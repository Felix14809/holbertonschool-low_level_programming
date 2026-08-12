#include "lists.h"
/**
 * dlistint_len - counts elements in a list
 * @h: pointer to head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t elements = 0;

	if (current == NULL)
		return (elements);
	while (current->prev != NULL)
		current = current->prev;
	while (current != NULL)
	{
		current = current->next;
		elements++;
	}
	return (elements);
}

