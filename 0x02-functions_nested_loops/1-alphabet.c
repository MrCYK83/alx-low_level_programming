#include "main.h"
/**
 * main - prints alphabets in lowercase
 *
 * Return: Always 0 on success
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
