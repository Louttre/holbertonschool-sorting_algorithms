#include "sort.h"
#include <stdio.h>
/**
 * lomuto - function that partition the array
 * @array: array of int
 * @low: first term of the array
 * @high: last member of the array
 * @size: size of the array
 * Return: index of pivot
 */
int lomuto(int *array, int low, int high, size_t size)
{
	int i = low - 1, j, temp;
	int pivot = array[high];
	unsigned int l;

	for (j = low; j <= high; j++)
	{
		l = 0;
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				for (l = 0; l <= size; l++)
				{
					printf("%d", array[l]);
					if (l < size)
						printf(", ");
					else
						putchar('\n');
				}
			}
		}
	}
	return (i);
}
/**
 * quick_sort_bis - function that sort the array recursively
 * @array: array of int
 * @low: first term of the array
 * @high: last member of the array
 * @size: size of the array
 */
void quick_sort_bis(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = lomuto(array, low, high, size);
		quick_sort_bis(array, low, i - 1, size);
		quick_sort_bis(array, i + 1, high, size);
	}
}
/**
 * quick_sort - function that sort the array
 * @array: array of int
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int high = size - 1;

	quick_sort_bis(array, 0, high, size - 1);
}
