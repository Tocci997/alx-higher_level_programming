#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: singly linked list to be checked
 * Return: 0 if there is no cycle and 1 if there is.
 */
int check_cycle(listint_t *list)
{
	listint_t *dull, *rapid;

	if (list == NULL || list->next == NULL)
	{
		return (0);
	}
	dull = list->next;
	rapid = list->next->next;

	while (dull && rapid && rapid->next)
	{
		if (dull == rapid)
		{
			return (1);
		}
		dull = dull->next;
		rapid = rapid->next->next;
	}
	return (0);
}
