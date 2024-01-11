#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 * print_array: fffejgjgijrgej
 * the Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t r, o;
	int temp;
	int swap;

	if (array == NULL || size == 0)
	{
		return;
	}

	for (r = 0; r < size - 1; r++)
	{
		swap = 0;

		for (o = 0; o < size - r - 1; o++)
		{
			if (array[o] > array[o + 1])
		{
				temp = array[o];
				array[o] = array[o + 1];
				array[o + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}

		if (swap == 0)
			break;
	}
}
