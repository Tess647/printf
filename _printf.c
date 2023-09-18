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
		{"%s", printf_string}, {"%c", printf_char}, {"%%", printf_percent}
	};

	va_list list_args;
	int i = 0, j, totalChar = 0;

	va_start(list_args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 2;
		while (j >= 0)
		{
			if (m[j].spec[0] == format[i] && m[j].spec[1] == format[i + 1])
			{
				totalChar += m[j].func(list_args);
				i = i + 2;
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
