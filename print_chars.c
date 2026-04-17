/* sara to do */
#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a character
 * @args: The va_list containing the character to print.
 *
 * Return: 1 (number of characters printed)
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/* Abdulrahman to do */
/**
 * print_chars - Prints a string from a va_list.
 * @args: The va_list containing the string to print.
 *
 * Return: The number of characters printed (length of the string).
 */

int print_chars(va_list args)
{
	char *str = va_arg(args, char *);
	int counter = 0;

	while (str[counter])
	{
		_putchar(str[counter]);
		counter++;
	}
	return (counter);

}
