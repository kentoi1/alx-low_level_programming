#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * return: this return 0 (success)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
