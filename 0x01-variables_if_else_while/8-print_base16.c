#include <stdio.h>
/**
 * main - print all numbers of base in lower case
 * return: this returns 0 (success)
*/
int main(void)
{

	char c = 'a';
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
	}
		else
	{
		putchar(c);
		c++;
	}

	}
	putchar('\n');
	return (0);

}
