#include "lists.h"

/**
  *get_nodeint_at_index - gets index node
  *@head: head of list
  *@index: where we get the node
  *Return: he nth node of listint_t or NULL if it doesn't exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	ptr = head;

	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}

		ptr = ptr->next;
	}

	return (ptr);

}

