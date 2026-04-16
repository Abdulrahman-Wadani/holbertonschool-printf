/* sara to do */
#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a character
 * @c: character to print
 *
 * Return: 1 (number of characters printed)
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_percent - prints %
 *
 * Return: 1
 */
int print_percent(void)
{
	return (write(1, "%", 1));
}
