#include "lists.h"

/**
  * dlistint_len - Length
  * @h: Head pointer
  * Return: Coun
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
