#include "main.h"

/**
 * _islower - check for lower case character
 * @c: parameter t0 be checked
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
