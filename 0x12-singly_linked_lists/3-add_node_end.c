#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a linked list
 * @head: A double pointer to the inked list
 * @str: A string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head = newnode;
	return (newnode);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = newnode;

	return (newnode);
}

