#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char character);
int printf_char(va_list args, int printed);
int printf_str(va_list args, int printed);
int printf_int(va_list args, int printed);
int selector(const char *format, va_list args, int printed);
int printf_bin(unsigned int num, int printed);
int _printf(const char *format, ...);
int _x(unsigned int num, int printed, int uppercase);
int printf_oct(unsigned int num, int printed);
int printf_unsign(unsigned int num, int printed);
int printf_rev(va_list args, int printed);
int printf_point(va_list args, int printed);

#endif
