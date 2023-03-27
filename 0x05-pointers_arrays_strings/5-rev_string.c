#include "main.h"

/**
 * print_rev - string to be printed in reverse
 * @s: the string to be printed
 * Return: void
 */
void print_rev(char *s)

{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
