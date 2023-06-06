#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - A function that deletes the head node
 * @head: pointer to the first node of linked list
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
