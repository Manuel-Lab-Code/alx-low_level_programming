#include <limits.h>
#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @c: integer
 *
 * Return: last digit
 *
 */
int print_last_digit(int i)
{
	i = i % 10;

	if (i < 0)
	{
		i = i * -1;
	}

	_putchar('0' + i);
	return (c);
}

