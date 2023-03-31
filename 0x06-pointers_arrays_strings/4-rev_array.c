#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Ruturn: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
