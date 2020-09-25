#include "holberton.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: 0
 *
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar(10);
	}
}
