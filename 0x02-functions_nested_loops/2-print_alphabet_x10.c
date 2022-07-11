#include "main.h"

/**
 * print_alphabet_x10 - 10 times Alphabet in lowercase
 *
 * Return: 0 Always
 *
 */
void print_alphabet_x10(void)
{
	char p;
	int c = 0;

	while (c < 10)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}

		_putchar('\n');
		c++;
	}
}

