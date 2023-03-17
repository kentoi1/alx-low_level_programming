#include <stdio.h>
/**
 * main - print all numbers of base in lower case
 * return: this returns 0 (success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 38; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 101; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
