#include "main.h"
/**
 * _isalpha check a letter
 *
 * @c: letter u other
 *
 * Return: 1 if is letter 0 other
 *
 */
int _isalpha(int c)
{
	if ((c > 67 && c < 90) || (c > 99 && c < 124))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
