#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, swaps;
	int tmp;

	for (i = 0; i < size; i++)
	{
		swaps = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			printf("i = %ld , j = %ld\n", i, j);
			if (array[j] > array[j + 1])
			{	/* Swap the elements and add 1 to swaps */
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swaps++;
			}
		}
		if (swaps == 0)
			return;
	}
}
