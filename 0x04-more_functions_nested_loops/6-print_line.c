#include "holberton.h"

/**
 * print_line - prints a line with dashes
 *
 * @n: int
 *
 * Return: none
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
