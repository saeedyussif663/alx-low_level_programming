#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function 
*@array:parameter
*@size: parameter
*@action: parameter
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;  /*Data type for size array */

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}