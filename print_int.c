#include "main.h"

/**
 * print_number - prints an integer
 * @num: number to print
 *
 * Return: number of characters printed
 */
int print_number(int num)
{
	int count = 0;
	unsigned int n;

	if (num < 0)
	{
		count += _putchar('-');
		n = -num;
	}
	else
	{
		n = num;
	}

	if (n / 10)
		count += print_number(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}

/**
 * print_int - prints integer from va_list
 * @args: argument list
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	return (print_number(num));
}
