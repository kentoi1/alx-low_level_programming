#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 * return: always return 0 (success)
*/
int main(void)
{
	int a;
	int b;

	for (a = 0; b <= 9; a++)
	{
		for (a = b + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

