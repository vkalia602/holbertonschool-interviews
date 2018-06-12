#include "search_algos.h"
/**
 * print_array - Function that prints an array
 * @array: Array that needs to be printed
 * @left: starting index of the array
 * @right: Ending index of the array
 * Return: void
 */
void print_array(int *array, int left, int right)
{
	int i;

	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
	}
	printf("\n");
}
/**
 * binary_search - Function that finds a @value in an @array using binary search
 * algorithm
 * @array: Array to be searched in
 * @size: size of the @array
 * @value: value to be searched for in the @array
 * Return: index of the @value on success, -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;

	if (!size || !array)
		return (-1);

	while (left < right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		mid = left + ((right - left) / 2);
		if (value == array[mid])
			return(mid);
		if (value < array[mid])
			right = mid - 1;
		if (value > array[mid])
			left = mid + 1;
	}
	printf("Searching in array: ");
	print_array(array, left, right);
	return (-1);
}
