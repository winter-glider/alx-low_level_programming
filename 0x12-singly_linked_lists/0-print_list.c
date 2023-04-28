#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *print_list -prints all the elements of a list_t list
  *@h: the list
  *Return:the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t temp = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
			return (temp);
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			temp++;
		}

	}

	return (temp);

}



