#include "lists.h"

/**
  * print_dlistint - Print all elements
  * @h: Pointer to the head
  * Return: Number
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

