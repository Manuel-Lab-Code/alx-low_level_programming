#include "main.h"
/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int yz = 0;
	int min = 1;
	int abc = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{

			abc = 1;
			yz = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (abc == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}
