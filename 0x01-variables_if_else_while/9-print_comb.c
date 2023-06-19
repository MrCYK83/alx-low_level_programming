#include <stdio.h>
/**
 * Main - prints numbers between 0 to 9 with commas and spaces
 *
 * Return - returns 0 if code is a success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
