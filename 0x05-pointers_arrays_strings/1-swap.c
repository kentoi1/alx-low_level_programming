#include <stdio.h>

/**
 * swap_int - swap values of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
	/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
