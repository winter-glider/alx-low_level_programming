#include "lists.h"

/**
  *listint_len - length of listint_t
  *@h: head of listint_t
  *Return: length of list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;

		count++;


	}

	return (count);

}
