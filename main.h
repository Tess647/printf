#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/**
  * struct form - match the converion specifiers for printf
  * @spec: type char pointer of the specifiers required
  * @func: type pointer to function for the conversion specifier
  */

typedef struct form
{
	char *spec;
	int (*func)();
} match_block;

int printf_Hex(va_list list_args);
int printf_hex(va_list list_args);
int printf_octal(va_list list_args);
int printf_bin(va_list list_args);
int printf_percent(void);
int printf_char(va_list list_args);
int printf_string(va_list list_args);
int printf_String(va_list list_args);
int printf_int(va_list list_args);
int printf_signedint(va_list list_args);
int printf_unsignedint(va_list list_args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
