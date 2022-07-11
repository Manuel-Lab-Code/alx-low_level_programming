#include "main.h"

/**
 * _islower - check lowercase character.
 *
 * @c: letterr u other
 *
 * Return: 1  if c is lowercase
 *
 */
int _islower(int c)
{
	if (c > 96 && c < 125)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

