#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: the ithe retfvbsorts a doubly linked list of integers in ascen
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *node_turn, *tmp;
	/* Check the list */
	if (list == NULL)
		return;
	node_turn = *list;
	/* Loop through the list */
	while (node_turn)
	{	/* Check if the first node */
		if (node_turn->prev == NULL)
		{
			node_turn = node_turn->next;
			continue;
		}
		current = node_turn;
		/* loop back while swaping untill not */
		while (current->prev->n > current->n)
		{	/* make a tmp for current->prev and swap */
			tmp = current->prev;
			/* relation of the two nodes to outer nodes */
			current->prev = tmp->prev;
			tmp->next = current->next;
			/* relation of the two nodes to each other */
			current->next = tmp;
			tmp->prev = current;
			/* relation of the outer nodes -if any- to the nodes*/
			if (tmp->next != NULL)
				tmp->next->prev = tmp;
			if (current->prev != NULL)
				current->prev->next = current;
			else
			{	/* That means we are on the first node */
				*list = current;
				print_list(*list);
				break;
			}
			print_list(*list);
		}
		node_turn = node_turn->next;
	}
}
