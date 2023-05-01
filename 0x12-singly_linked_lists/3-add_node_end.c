#include "lists.h"
#include <string.h>
/**
  *add_node_end - add node to end of list_t
  *@head: head of list_t
  *@str: the string
  *Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tail;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
	{
		return (NULL);
	}

	tail->str = strdup(str);
	if (tail->str == NULL)
	{
		free(tail);
		return (NULL);
	}

	tail->len = strlen(tail->str);
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = tail;


	return (tail);

}
