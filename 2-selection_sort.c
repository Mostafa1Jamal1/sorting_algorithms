#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: an array of integers to sort
 * @size: the size of array
 */

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, smallest;

	for (i = 0; i < size; i++)
	{
		smallest = i;
		for (j = i; j < size; j++)
		{
			if (array[smallest] > array[j])
				smallest = j;
		}
		tmp = array[i];
		array[i] = array[smallest];
		array[smallest] = tmp;
		print_array(array, size);
	}
}
