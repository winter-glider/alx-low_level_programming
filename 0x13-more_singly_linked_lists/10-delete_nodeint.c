#include "lists.h"

/**
  *delete_nodeint_at_index - deletes node
  *@head: head of list
  *@index: where node is
  *Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *ptr2 = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (index != 0 && ptr != NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		index--;
	}
	if (ptr == NULL)
		return (-1);

	ptr2->next = ptr->next;
	free(ptr);
	ptr = NULL;


	return (1);

}


