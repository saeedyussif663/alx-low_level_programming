#include "lists.h"

/**
  * sum_dlistint - sums data
  * @head: Head pointer to the head
  * Return: Sum
  */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (!head)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
