#include "sort.h"

/**
 *bubble_sort - sorts an array of int in ascending orde
 *@array: array of numbers
 *@size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int num;

	if (array == NULL  || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				num = array[j];
				array[j] = array[j + 1];
				array[j + 1] = num;
				print_array(array, size);
			}
		}
	}
}
