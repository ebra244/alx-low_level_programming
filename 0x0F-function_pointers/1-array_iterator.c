#include "function_pointers.h"
/**
 * array_iterator - Function that excutes each elements of the array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function you use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
