#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm.
 * @array: the array to be printed.
 * @size: number of elements in @array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, temp, index, index_nombre_min;
	int nombre_min;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (index = 0 ; index < size ; index++)
	{
		nombre_min = array[index];
		index_nombre_min = index;

		for (i = index ; i < size ; i++)
		{
			if (nombre_min > (array[i]))
			{
				nombre_min = array[i];
				index_nombre_min = i;
			}
		}
		if (index_nombre_min != index)
		{
			temp = array[index];
			array[index] = nombre_min;
			array[index_nombre_min] = temp;
			print_array(array, size);
		}
	}
}
