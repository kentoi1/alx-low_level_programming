#include <stdio.h>
/**
 *  main - prints the alphabets without q and e
 *  return: this returns 0 (success)
*/
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
			putchar(b);
	}
	putchar('\n');
	return (0);
}
