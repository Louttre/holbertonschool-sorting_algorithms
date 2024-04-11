#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list -  sorts a doubly linked list of integers
 * @list: pointer to the head of a doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list, *temp2 = temp->next;
	listint_t *holder, *holder2;

	if (!list)
		return;
	while (temp2)
	{
		holder2 = temp2->next;
		while (temp && temp2->n < temp->n)
		{
			holder = temp;
			temp2->prev = temp->prev;
			temp->next = temp2->next;
			temp2->next = holder;
			temp->prev = temp2;
			if (temp->next)
				temp->next->prev = temp;
			if (temp2->prev)
				temp2->prev->next = temp2;
			else
				*list = temp2;
			temp = temp2->prev;
			holder = *list;
			while (holder)
			{
				printf("%d", holder->n);
				if (!holder->next)
					printf("\n");
				else
					printf(", ");
				holder = holder->next;
			}
		}
		if (holder2)
			temp = holder2->prev;
		temp2 = holder2;
	}
}
