#include "holberton.h"

/**
 * _isdigit - checks if char is a digit
 *
 * @c: int
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	else
		return (0);
}
