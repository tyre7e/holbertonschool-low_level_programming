#include "holberton.h"

/**
 * print_triangle - prints a triangle with hastags
 *
 * @size: size of the triangle
 *
 * Return: none
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);
	else
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
				_putchar(' ');
			for (; j <= size; j++)
				_putchar('#');
			_putchar(10);
		}
}
