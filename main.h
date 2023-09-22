#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct buffer - represent the buffer
 * @data: buffer data
 * @position: current position in the buffer
 *
 */
typedef struct buff_s 
{
	char data[1024];
	int position;
} PrintBuffer;

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

/* buffer function prototype */
void initPrintBuffer(PrintBuffer *buffer);
void writeCharToBuffer(PrintBuffer *buffer, char c);


/* function prototypes */
int printf_rot13(va_list list_args);
int printf_revstring(va_list list_args);
int printf_pointer(va_list list_args);
int printf_hex_ax(unsigned long int num);
int printf_Hex(va_list list_args);
int printf_hex(va_list list_args);
int printf_octal(va_list list_args);
int printf_bin(va_list list_args);
int printf_percent(void);
int printf_char(va_list list_args);
int printf_string(va_list list_args);
int printf_exclusive_string(va_list list_args);
int printf_int(va_list list_args);
int printf_signedint(va_list list_args);
int printf_unsignedint(va_list list_args);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
