#include "sort.h"
#include <stdio.h>
#include <stddef.h>
/**
 * bubble_sort - sorts an array of integers
 * @array: array of integers to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{

	unsigned int temp, j, l, i = 0, swap = 1;

	for (; swap == 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				swap = 1;
				for (l = 0; l < size; l++)
				{
					printf("%d", array[l]);
					if (l != size - 1)
 						printf(", ");
					else
						putchar('\n');
				}
			}
		}
	}	
}
