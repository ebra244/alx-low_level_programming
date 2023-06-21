#include "function_pointers.h"

/**
 * int_index - Function that searches for integer
 * @array: Pointer to the array to be searched its elements
 * @size: Size of the array
 * @cmp: Pointer to the function to be used
 * Return: Always -1 if no element maches
 * 0 if success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);

		}
	}
	return (-1);
}
