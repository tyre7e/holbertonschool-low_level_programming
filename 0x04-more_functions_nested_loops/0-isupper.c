#include "holberton.h"

/**
 * _isupper - checks for uppercase
 *
 * @c: int
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	else
		return (0);
}
