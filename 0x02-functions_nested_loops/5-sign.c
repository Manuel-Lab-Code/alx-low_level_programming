#include "main.h"

/**
 * print-sign - sign of a number.
 *
 * @n: n is integer
 *
 * Return: 1 +, cer 0, -1.
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
