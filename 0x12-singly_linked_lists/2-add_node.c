#include "lists.h"
#include <string.h>

/**
  *add_node - adds node to list_t list
  *@head: pointer to head of list_t
  *@str: the string
  *Return:the address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = strlen(ptr->str);

	ptr->next = *head;
	*head = ptr;

	return (ptr);

}



