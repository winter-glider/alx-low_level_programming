#include "lists.h"

/**
  *print_listint - prints listint_t list
  *@h: head of list
  *Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}

	return (count);

}
