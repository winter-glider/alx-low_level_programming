#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node
 * @head: head of list
 * @idx: where node is placed
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *prev;
	unsigned int i;

	if (*head == NULL && idx != 0)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	prev = NULL;
	for (i = 0; i < idx; i++)
	{
		if (prev == NULL)
			prev = *head;
		else
			prev = prev->next;

		if (prev == NULL && i != idx - 1)
		{
			free(ptr);
			return (NULL);
		}
	}
	ptr->next = prev->next;
	prev->next = ptr;
	return (ptr);
}
