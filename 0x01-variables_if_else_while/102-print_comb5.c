#include <stdio.h>
/**
 * main - prints combinations of two two-digit numbers
 *
 * Return: returns 0 if success
 */
int main(void)
{
int i, e, g, h, dd1, dd2;

i = e = g = h = 48;
while (h < 58)
{
	g = 48;
	while (g < 58)
	{
		e = 48;
		while (e < 58)
		{
			i = 48;
			while (i < 58)
			{
				dd1 = (h * 10) + g;
				dd2 = (e * 10) + i;
				if (dd1 < dd2)
				{
					putchar(h);
					putchar(g);
					putchar(' ');
					putchar(e);
					putchar(i);
					if (h == 57 && g == 56 && e == 57 && i == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			e++;
		}
		g++;
	}
	h++;
}
putchar('\n');
return (0);
}
