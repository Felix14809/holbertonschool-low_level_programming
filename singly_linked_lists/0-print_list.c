#include "lists.h"
/**
* print_list - prints all elements in the list
*@h: structure
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned long int elements;

	elements = 0;
	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[%d] %s\n", 0, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	elements++;
	}
	return (elements);
}
