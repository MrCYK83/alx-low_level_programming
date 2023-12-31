#include <stdio.h>
/**
 * main - prints all combinations of three digits
 *
 * Return: returns 0 if success
 */
int main(void)
{
	int i, e, g;

	i = e = g = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (e != i && e != g && i != g && e < i && i < g)
				{
					putchar(e);
					putchar(i);
					putchar(g);
					if (i == 56 && e == 55 && g == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				g++;
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
