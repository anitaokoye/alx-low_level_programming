#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - A function that returns the node
 * at a certain index in a linked list
 * @head: first node
 * @index: index of the node to return
 * Return: NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
	temp = temp->next;
	n++;
	}
	return (temp ? temp : NULL);
}

