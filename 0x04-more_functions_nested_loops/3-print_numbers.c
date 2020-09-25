#include "holberton.h"

/**
 * print_numbers - prints 0-9
 *
 * Return: none
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	_putchar(10);
}
