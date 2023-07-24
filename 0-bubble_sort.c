#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t n, i, temp;

	if (size < 2)
	{
		print_array(array, size);
		return;
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (i = 0; i < size - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
