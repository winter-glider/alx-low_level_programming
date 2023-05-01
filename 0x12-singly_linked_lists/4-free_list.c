#include "lists.h"

/**
  *free_list - free list_t
  *@head: head of list_t
  *Return: return nothing
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);

	}

}

