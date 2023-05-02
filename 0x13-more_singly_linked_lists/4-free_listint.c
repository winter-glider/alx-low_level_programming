#include "lists.h"

/**
  *free_listint - free listint_t
  *@head: head of listint_t
  *Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
