#include "lists.h"
/**
* list_len - prints all elements in the list
*@h: structure
*Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	unsigned long int elements;

	elements = 0;
	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
