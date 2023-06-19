#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 *
 * Return - returns 0 if code runs okay (Success)
 */
int main(void)
{
        int i;

        for (i = 122; i > 96; i--)
        {
                putchar(i);
        }
        putchar('\n');
        return (0);
}
