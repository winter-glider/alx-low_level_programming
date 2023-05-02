#include "lists.h"

/**
  *add_nodeint - adds node to front of listint_t
  *@head: head of listint_t
  *@n: integer
  *Return: he address of the new element, or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	ptr->next = *head;
	*head = ptr;

	return (ptr);

}
