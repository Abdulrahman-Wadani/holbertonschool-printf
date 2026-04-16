/* Abdulrahman to do */
#include "main.h"
/**
 * _printf - Prints a formatted string to standard output.
 * @format: The format string containing conversion specifiers.
 *
 * Return: The number of characters printed (excluding the null byte).
 *
 * Description: A simplified printf-like function that writes output to the
 * standard output. Supports %c for characters, %s for strings, and %% for a
 * literal percent sign. Also supports %d and %i for signed decimal integers.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int counter = 0;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
				counter += print_chars(args);
			else if (format[i] == 'c')
				counter += print_char(args);
			else if (format[i] == '%')
				counter += _putchar('%');
			else if (format[i] == 'i' || format[i] == 'd')
				counter += print_int(args);
			else
			{
				counter += _putchar('%');
				counter += _putchar(format[i]);
			}
		}
		else
			counter += _putchar(format[i]);
		i++;
	}
	return (counter);

}
