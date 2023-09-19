#include "main.h"

/**
  * _printf - function produces output according to a format string
  * @format: argument string to be printed
  *
  * Return: number of characters printed otherwise -1
  */
int _printf(const char *format, ...)
{
	match_block mb[] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", printf_percent},
		{"%d", printf_signedint},
		{"%i", printf_signedint_i},
		{"%u", printf_unsignedint},
		{"%b", printf_bin},
		{"%o", printf_octal},
		{"%x", printf_hex},
		{"%X", printf_Hex}
	};

	va_list list_args;
	int i = 0, j, totalChar = 0;

	va_start(list_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 9;
		while (j >= 0)
		{
			if (mb[j].spec[0] == format[i] && mb[j].spec[1] == format[i + 1])
			{
				totalChar += mb[j].func(list_args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		totalChar++;
		i++;
	}

	va_end(list_args);
	return (totalChar);
}
