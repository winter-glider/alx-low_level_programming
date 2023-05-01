#include "lists.h"

/**
  *list_len - returns the num of elements in a linked list_t list
  *@h: the list
  *Return: num of elements
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);

}
