#include "main.h"

/**
 * printf_rev - prints a binary number
 * @args: number of arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_rev(va_list args, int printed)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		printed++;
	}

	return (printed);
}
