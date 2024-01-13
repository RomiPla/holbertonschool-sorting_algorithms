#include "sort.h"
#include <stdio.h>

/**
 * selection_sort - Sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t r, o, min_idx;

	for (r = 0; r < size - 1; r++)
	{
		min_idx = r;
		for (o = r + 1; o < size; o++)
		{
			if (array[o] < array[min_idx])
				min_idx = o;
		}
		if (min_idx != r)
		{
			int temp = array[r];

			array[r] = array[min_idx];

			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}
