#include "main.h"

/**
  * printf_char - print char
  * @list_args: input argument parameter
  * Return: 1 (char)
  */
int printf_char(va_list list_args)
{
	char c;

	c = va_arg(list_args, int);
	_putchar(c);
	return (1);
}
