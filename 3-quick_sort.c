#include "sort.h"
/**
 * recursive_quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 * @start: the start of the partition
 * @end: the end of the partition
 */
void recursive_quick_sort(int *array, size_t size, long start, long end)
{
	long i, j;
	int tmp, pivot;
	bool isbig = false;
	/* Base condition */
	if (start >= end)
		return;
	/* Partitioning */
	pivot = array[end];
	i = start;
	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot && !isbig)
		{
			i++;
			continue;
		}
		if (array[j] < pivot)
		{	/* Swap array[i] with array[j] */
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i++;
			print_array(array, size);
		}
		isbig = true;
	}
	if (!isbig)
		recursive_quick_sort(array, size, start, end - 1);
	else
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, size);
		recursive_quick_sort(array, size, start, i - 1);
		recursive_quick_sort(array, size, i + 1, end);
	}
}
/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	long start = 0;
	long end = size - 1;

	recursive_quick_sort(array, size, start, end);
}
