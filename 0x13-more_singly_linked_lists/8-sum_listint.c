#include "lists.h"

/**
  *sum_listint - sum of all the(n) of a listint_t linked list.
  *@head: head of list
  *Return: sum of data n
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;

		head = head->next;

	}

	return (sum);

}
