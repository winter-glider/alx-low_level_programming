#include "lists.h"

/**
  *add_nodeint_end - add node to end of list
  *@head: head of list
  *@n: integer
  *Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tail;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
	{
		return (NULL);
	}

	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}

	ptr = *head;

	while (ptr->next)
	{
		ptr = ptr->next;
	}

	ptr->next = tail;

	return (ptr);

}
