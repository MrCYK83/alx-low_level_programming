#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints the character 'c' to output
 * 
 * Return: 0 on success
 * On error, 
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
