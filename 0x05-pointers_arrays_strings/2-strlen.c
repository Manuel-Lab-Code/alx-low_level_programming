#include "main.h"



/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;
	return (a);
}
