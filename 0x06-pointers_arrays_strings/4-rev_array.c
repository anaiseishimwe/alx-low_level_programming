#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i, j;

	for (i = 0; j = n - 1; i < j)

	{
		temp = a[i];

		a[i] = a[j];

		a[j] = temp;
	}
	i++;
	j--;
}
