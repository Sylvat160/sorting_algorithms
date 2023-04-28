#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * in ascending order
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int tmp, sorted = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j < size - 1)
{
if (array[j] > array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
sorted = 1;
print_array(array, size);
}
}
}
if (sorted == 0)
break;
}
}
