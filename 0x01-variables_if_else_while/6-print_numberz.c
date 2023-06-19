#include <stdio.h>
/**
 * main - prints numbers between 0 to 9
 *
 * Return: returns 0 when code runs okay (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
