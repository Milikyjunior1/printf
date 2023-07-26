#include "main.h"

/**
 * printf_str - prints a string
 * @args: number of arguments
 * @printed: the printed characters
 * Return: Printed characters
 */

int printf_str(va_list args, int printed)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		printed++;
		str++;
	}
	return (printed);
}
