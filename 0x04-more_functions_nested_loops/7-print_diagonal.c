#include "holberton.h"

/**
 * print_diagonal - prints diagonal slashes
 *
 * @n: number of slashes
 *
 * Return: none
 */

void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		while (j < n)
		{
			i = 0;
			while (i < j)
			{
				_putchar(' ');
				i++;
			}
			j++;
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
