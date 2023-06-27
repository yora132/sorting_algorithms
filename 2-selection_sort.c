#include "sort.h"
/**
 * selection_sort -  a function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: input array
 * @size: size of the input array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, temp, j, min_idx;

	if (size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx == i)
			continue;
		temp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = temp;
		print_array(array, size);
	}
}
