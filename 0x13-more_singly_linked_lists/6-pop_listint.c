#include "lists.h"

/**
  *pop_listint - deletes listint_t head node
  *@head: node to be deleted
  *Return: head node’s data (n).
  */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head == NULL)
		return (0);


	ptr = *head;
	*head = (*head)->next;
	n = ptr->n;
	free(ptr);

	return (n);

}



