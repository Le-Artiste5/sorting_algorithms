#include <stdio.h>
#include "sort.h"
/**
 * selection_sort - The selection sorting method
 *
 * @array: This is the array that contain the values
 * @size: This is the size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, temp, j, m_num_idx;
	
	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		m_num_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[m_num_idx]) m_num_idx = j;
		
		if (m_num_idx !=  i)
		{
		temp = array[i];
		array[i] = array[m_num_idx];
		array[m_num_idx] = temp;

		printf("Swap process %d and %d: ", array[i], array[m_num_idx]);
                }
		print_array(array, size);

		

	}



}
