#include <stdio.h>
#include "sorth.h"
/**
 * insertion_sort_list - This is the function that sorts a list
 *
 * @list: The list to be sorted
 *
 *
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev = *list;
	listint_t *curr = (*list)->next;

	while (curr != NULL)
	{
		listint_t *next = curr->next;
		listint_t *temp = *list;

		while (temp != curr && curr->n < temp->n)
		{
			prev = temp;
			temp = temp->next;
		}
		if (temp != curr){
			prev->next = curr->next;
			curr->next = temp;
			if (prev != list){
				curr->prev = prev->prev;
				previous->prev->next = current;
			}
			else{
				*list = current;
			}
			prevvious->next->prev = previous;
			print_list(*list);
		}
		previous = curr;
		curr = next;
	}

}
