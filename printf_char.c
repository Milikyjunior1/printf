#include "main.h"

/**
 * printf_char - prints a binary number
 * @args: Arguments to use
 * @printed: the printed characters
 * Return: Printed characters
 */

int printf_char(va_list args, int printed)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (printed + 1);
}
