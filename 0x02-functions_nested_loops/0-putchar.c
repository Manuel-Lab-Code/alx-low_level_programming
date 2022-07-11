#include "main.h"
/**
 * main - prints putcher
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int ab;

	for (ab = 0; ab < 8; ++ab)
		_putchar(str[ab]);
	_putchar('\n');


	return (0);
}
