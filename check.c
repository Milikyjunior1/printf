#include "main.h"

/**
 * selector - selects the appropriate specifiers
 * @args: number of arguments
 * @printed: the printed characters
 * @format: the format specifier
 * Return: Printed characters
 */

int selector(const char *format, va_list args, int printed)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			printed = printf_int(args, printed);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			printed++;
			break;
		case 's':
			printed = printf_str(args, printed);
			break;
		case '%':
			_putchar('%');
			printed++;
			break;
		case 'b':
			printed = printf_bin(va_arg(args, unsigned int), printed);
			break;
		case 'x':
		case 'X':
			printed = _x(va_arg(args, unsigned int), printed, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			printed = printf_oct(va_arg(args, unsigned int), printed);
			break;
		case 'u':
			printed = printf_unsign(va_arg(args, unsigned int), printed);
			break;
		case 'r':
			printed = printf_rev(args, printed);
			break;
		case 'p':
			printed = printf_point(args, printed);
			break;
		default:
			break;
	}
	return (printed);
}
