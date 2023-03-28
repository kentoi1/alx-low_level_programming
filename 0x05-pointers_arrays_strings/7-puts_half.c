#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *
 * if odd len, n = (length_of_the_string - 1)/2
 * @str: input
 *
 * Return: half of input
 */

void put_half(char *str)
{
	int j, k, longi;

	longi = 0;

		for (j = 0; str[j] != '\0'; j++)
			longi++;
	k = (longi / 2);

	if ((longi % 2) == 1)
		k = ((longi + 1) / 2);

	for (j = k; str[j] != '\0'; a++
			_putchar(str[j]);
			_putchar('\n');
}
