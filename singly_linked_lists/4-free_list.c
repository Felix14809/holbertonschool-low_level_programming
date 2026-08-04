#include "lists.h"
/**
* free_list - frees a list
*@head: pointer to a struct
*Return:
*/
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	if (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
	}
	while (temp != NULL)
	{
		head = temp;
		temp = head->next;
		free(head->str);
		free(head);
	}
	}
