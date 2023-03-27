#include "main.h"
#include <stdio.h>

/**
 * main - always the entry point.
 * description: function that takes a pointer to an int as parameter and updates the value
 * return: always 0 (success)
*/
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	putchar('Address of n: %p\n', &n);
	putchar('value of p: %p\n', p);
	return (0)
}

