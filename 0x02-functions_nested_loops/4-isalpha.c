#include "main.h"
/**
 *_isalpha - Test the _isalpha function
 *
 * @c:to pass to _isalpha function
 *
 * Return: 1 if is letter 0 other
 *
 */
int _isalpha(int c)
{
	if ((c > 66 && c < 91) || (c > 98 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
