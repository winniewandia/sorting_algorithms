#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array
 */

void quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1, size);
}

/**
 * quick - Function that calls itself
 * @array: Array to be sorted
 * @start: First index
 * @end: Last index
 * @size: size of the array
 */
void quick(int *array, int start, int end, int size)
{
	int pivot;

	if (end <= start)
		return;
	pivot = partition(array, start, end, size);
	quick(array, start, pivot - 1, size);
	quick(array, pivot + 1, end, size);
}

/**
 * partition - Returns the index of the pivot
 * @array: Array to be partitioned
 * @start: First index
 * @end: Last index
 * @size: Size of the array
 *
 * Return: Index of the pivot
 */

int partition(int *array, int start, int end, int size)
{
	int pivot = array[end];
	int temp;
	int i = start - 1;
	int j;

	for (j = start; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	i++;
	temp = array[i];
	array[i] = array[end];
	array[end] = temp;
	print_array(array, size);
	return (i);
}
