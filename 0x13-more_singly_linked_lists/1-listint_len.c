#include<stdio.h>
#include "lists.h"

/**
 * listint_len - A function that returns the number of element in listint_t
 * @h: listint_t to traverse
 * Return: number of element in listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
	num++;
	h = h->next;
	}

	return (num);
}
