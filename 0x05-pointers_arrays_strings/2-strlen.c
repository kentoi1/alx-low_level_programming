#include "main.h"

/**
 * _stlen - return the length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
